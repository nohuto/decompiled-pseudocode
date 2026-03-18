/*
 * XREFs of ?_RegInfo@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C0030BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003CA08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003CBC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     memmove @ 0x1C003D680 (memmove.c)
 */

__int64 __fastcall FxWmiIrpHandler::_RegInfo(
        FxWmiIrpHandler *This,
        _IRP *Irp,
        FxWmiProvider *Provider,
        FxWmiInstance *Instance)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v5; // ebp
  FxDeviceBase *m_DeviceBase; // r15
  PIRP v7; // rbx
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // r14
  unsigned __int8 v10; // r8
  unsigned __int16 *p_m_ParentObject; // rcx
  unsigned int v12; // r13d
  __int64 v13; // rax
  FxDriver *m_Driver; // r12
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // esi
  unsigned int v18; // esi
  _LIST_ENTRY *v19; // rbx
  unsigned int v20; // r15d
  _WORD *v21; // rcx
  unsigned __int16 *v22; // rcx
  unsigned int *v24; // rdx
  int Blink_high; // ecx
  unsigned int v26; // eax
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v29; // rcx
  unsigned __int8 i; // [rsp+20h] [rbp-58h]
  unsigned int v31; // [rsp+28h] [rbp-50h]
  unsigned int LowPart; // [rsp+2Ch] [rbp-4Ch]
  unsigned int v33; // [rsp+30h] [rbp-48h]
  const void **v34; // [rsp+38h] [rbp-40h]
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF
  PIRP v36; // [rsp+88h] [rbp+10h]

  v36 = Irp;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = 0;
  m_DeviceBase = This->m_DeviceBase;
  v7 = Irp;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( SLOBYTE(This->m_ObjectFlags) < 0
    && (Flink = This[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Flink, &irql, (unsigned __int8)Provider);
    v10 = irql;
  }
  else
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&This->m_NPLock.m_Lock);
    irql = v10;
  }
  p_m_ParentObject = 0LL;
  v12 = 32 * This->m_NumProviders + 24;
  v34 = 0LL;
  if ( m_DeviceBase[1].m_ChildEntry.Flink )
  {
    p_m_ParentObject = (unsigned __int16 *)&m_DeviceBase[1].m_ParentObject;
    v34 = (const void **)&m_DeviceBase[1].m_ParentObject;
  }
  else
  {
    v13 = *(_QWORD *)&m_DeviceBase[1].m_ObjectFlags;
    if ( v13 )
    {
      while ( !*(_QWORD *)(v13 + 272) )
      {
        v13 = *(_QWORD *)(v13 + 224);
        if ( !v13 )
          goto LABEL_5;
      }
      p_m_ParentObject = (unsigned __int16 *)(v13 + 264);
      v34 = (const void **)(v13 + 264);
    }
LABEL_5:
    m_DeviceBase = This->m_DeviceBase;
  }
  m_Driver = m_DeviceBase->m_Driver;
  v15 = 32 * This->m_NumProviders + 26;
  v33 = v15;
  if ( p_m_ParentObject )
  {
    v15 += *p_m_ParentObject;
    v33 = v15;
  }
  v16 = v15 + m_Driver->m_RegistryPath.Length;
  if ( v16 < v15 || (v17 = v16 + 2, v31 = v16 + 2, v16 + 2 < v16) )
  {
    FxNonPagedObject::Unlock(This, v10, v10);
    v20 = 0;
    v5 = -1073741675;
  }
  else
  {
    Parameters->NamedPipeType = v17;
    if ( v17 > LowPart )
    {
      v20 = 4;
    }
    else
    {
      Parameters->ReadMode = 0;
      Parameters->MaximumInstances = v12;
      Parameters->CompletionMode = v15;
      Parameters->InboundQuota = This->m_NumProviders;
      v10 = v7->Tail.Overlay.CurrentStackLocation->MinorFunction == 11;
      v18 = 0;
      v19 = This->m_ProvidersListHead.Flink;
      for ( i = v10; v18 < This->m_NumProviders; ++v18 )
      {
        v24 = &Parameters->NamedPipeType + 8 * v18;
        *(_LIST_ENTRY *)(v24 + 6) = v19[3];
        v24[11] = (unsigned int)v19[2].Flink;
        Blink_high = HIDWORD(v19[4].Blink);
        if ( (Blink_high & 4) != 0 )
        {
          v26 = 528384;
        }
        else
        {
          v26 = (HIDWORD(v19[4].Blink) & 2 | 0x40u) >> 1;
          if ( (Blink_high & 1) != 0 )
            v26 |= 0x40u;
        }
        if ( BYTE2(v19[5].Blink) )
        {
          v26 |= 0x10000u;
          BYTE2(v19[5].Blink) = 0;
        }
        v24[10] = v26;
        m_DeviceObject = m_DeviceBase->m_PhysicalDevice.m_DeviceObject;
        *((_QWORD *)v24 + 6) = m_DeviceObject;
        if ( v10 )
        {
          ObfReferenceObject(m_DeviceObject);
          v10 = i;
        }
        v19 = v19->Flink;
      }
      v17 = v31;
      v20 = v31;
      v7 = v36;
    }
    if ( SLOBYTE(This->m_ObjectFlags) < 0
      && (v29 = This[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink) != 0LL )
    {
      FxVerifierLock::Unlock((FxVerifierLock *)v29, irql, v10);
    }
    else
    {
      KeReleaseSpinLock(&This->m_NPLock.m_Lock, irql);
    }
    if ( v17 <= LowPart )
    {
      v21 = (_WORD *)((char *)Parameters + v12);
      if ( v34 )
      {
        *v21 = *(_WORD *)v34;
        memmove(v21 + 1, v34[1], *(unsigned __int16 *)v34);
      }
      else
      {
        *v21 = 0;
      }
      v22 = (unsigned __int16 *)((char *)Parameters + v33);
      *v22 = m_Driver->m_RegistryPath.Length;
      memmove(v22 + 1, m_Driver->m_RegistryPath.Buffer, m_Driver->m_RegistryPath.Length);
    }
  }
  v7->IoStatus.Information = v20;
  v7->IoStatus.Status = v5;
  IofCompleteRequest(v7, 0);
  return v5;
}
