/*
 * XREFs of ndisWMIDispatch @ 0x1C00A6BB4
 * Callers:
 *     ndisWMIIrpDispatch @ 0x1C00A6BA0 (ndisWMIIrpDispatch.c)
 *     NdisWdfDeviceWmiHandler @ 0x1C00DFDE0 (NdisWdfDeviceWmiHandler.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     ?ExtensionFromDevice@@YAPEAUNDIS_SETUP_DEVICE_EXTENSION@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0077E9C (-ExtensionFromDevice@@YAPEAUNDIS_SETUP_DEVICE_EXTENSION@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     ndisDummyHandler @ 0x1C00A63E4 (ndisDummyHandler.c)
 *     ndisWmiQuerySingleInstance @ 0x1C00A69C8 (ndisWmiQuerySingleInstance.c)
 *     ndisWmiExecuteMethod @ 0x1C00A6DE0 (ndisWmiExecuteMethod.c)
 *     ndisWmiQueryAllData @ 0x1C00A72F4 (ndisWmiQueryAllData.c)
 *     ndisWmiEnableEvents @ 0x1C00B749C (ndisWmiEnableEvents.c)
 *     ndisWmiRegister @ 0x1C00B9248 (ndisWmiRegister.c)
 *     ndisWmiDisableEvents @ 0x1C00C0668 (ndisWmiDisableEvents.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00E2244 (ndisWmiChangeSingleInstance.c)
 */

NTSTATUS __fastcall ndisWMIDispatch(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2, _IRP *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  unsigned int v4; // r14d
  _UNICODE_STRING *FileName; // r12
  unsigned int LowPart; // r13d
  __int64 Parameters; // r15
  char v11; // cl
  unsigned int MinorFunction; // r9d
  int AllData; // eax
  int v14; // ebx
  unsigned __int64 v15; // rax
  struct NDIS_SETUP_DEVICE_EXTENSION *v17; // rax
  __int64 v18; // r8
  _DEVICE_OBJECT *NextDeviceObject; // rcx
  unsigned __int16 v20; // cx
  struct _NDIS_MINIPORT_BLOCK *v21; // [rsp+20h] [rbp-38h]
  char v22; // [rsp+28h] [rbp-30h]
  __int64 v23; // [rsp+60h] [rbp+8h] BYREF

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  LODWORD(v23) = 0;
  FileName = CurrentStackLocation->Parameters.QueryDirectory.FileName;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Parameters = (__int64)CurrentStackLocation->Parameters.CreatePipe.Parameters;
  if ( a1 && **(_BYTE **)(a1 + 64) == 23 )
  {
    v17 = ExtensionFromDevice((struct _DEVICE_OBJECT *)a1);
    ++*(_BYTE *)(v18 + 67);
    *(_QWORD *)(v18 + 184) = CurrentStackLocation + 1;
    NextDeviceObject = v17->NextDeviceObject;
    return IofCallDriver(NextDeviceObject, a3);
  }
  v11 = byte_1C0092619;
  if ( (unsigned __int8)byte_1C0092619 >= 4u )
  {
    WPP_SF_qq(0x49u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a2, a3);
    v11 = byte_1C0092619;
  }
  if ( a2->Header.Type != 17 )
    return ndisDummyHandler(a1, a2, a3);
  if ( CurrentStackLocation->Parameters.WMI.ProviderId != a1 )
  {
    ++a3->CurrentLocation;
    ++a3->Tail.Overlay.CurrentStackLocation;
    NextDeviceObject = a2->NextDeviceObject;
    return IofCallDriver(NextDeviceObject, a3);
  }
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction <= 5 )
  {
    if ( MinorFunction == 5 )
    {
      if ( (unsigned __int8)v11 >= 4u )
        WPP_SF_q(0x51u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2);
      AllData = ndisWmiDisableEvents(a2, FileName);
      goto LABEL_15;
    }
    if ( !CurrentStackLocation->MinorFunction )
    {
      if ( (unsigned __int8)v11 >= 4u )
        WPP_SF_q(0x4Bu, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2);
      AllData = ndisWmiQueryAllData(a2, (__int64)&v23, v22);
      goto LABEL_15;
    }
    if ( MinorFunction == 1 )
    {
      if ( (unsigned __int8)v11 >= 4u )
        WPP_SF_q(0x4Cu, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2);
      AllData = ndisWmiQuerySingleInstance(a2, Parameters, LowPart, (unsigned int *)&v23, v21);
      goto LABEL_15;
    }
    if ( MinorFunction == 2 )
    {
      if ( (unsigned __int8)v11 >= 4u )
        WPP_SF_q(0x4Du, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2);
      AllData = ndisWmiChangeSingleInstance(a2);
      goto LABEL_15;
    }
    if ( MinorFunction != 3 )
    {
      if ( MinorFunction == 4 )
      {
        if ( (unsigned __int8)v11 >= 4u )
          WPP_SF_q(0x50u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2);
        AllData = ndisWmiEnableEvents(a2, FileName);
        goto LABEL_15;
      }
      goto LABEL_37;
    }
    if ( (unsigned __int8)v11 >= 4u )
    {
      WPP_SF_q(0x4Eu, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2);
      if ( (unsigned __int8)byte_1C0092619 >= 4u )
      {
        WPP_SF_q(0x41u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2);
        if ( (unsigned __int8)byte_1C0092619 >= 4u )
        {
          v20 = 66;
LABEL_57:
          WPP_SF_q(v20, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2);
        }
      }
    }
LABEL_58:
    v14 = -1073741637;
    goto LABEL_17;
  }
  if ( MinorFunction != 6 )
  {
    if ( MinorFunction != 7 )
    {
      if ( MinorFunction == 8 )
      {
        if ( (unsigned __int8)v11 >= 4u )
          WPP_SF_q(0x4Au, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2);
        AllData = ndisWmiRegister((_DWORD)a2, (__int64)&v23);
        goto LABEL_15;
      }
      if ( MinorFunction == 9 )
      {
        if ( (unsigned __int8)v11 >= 4u )
          WPP_SF_q(0x4Fu, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2);
        AllData = ndisWmiExecuteMethod(a2, Parameters, LowPart, &v23);
LABEL_15:
        v11 = byte_1C0092619;
        v14 = AllData;
        goto LABEL_16;
      }
LABEL_37:
      if ( (unsigned __int8)v11 >= 4u )
        WPP_SF_qD(0x54u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2, MinorFunction);
      v14 = -1073741808;
      goto LABEL_17;
    }
    if ( (unsigned __int8)v11 >= 4u )
    {
      v20 = 83;
      goto LABEL_57;
    }
    goto LABEL_58;
  }
  if ( (unsigned __int8)v11 >= 4u )
  {
    WPP_SF_q(0x52u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2);
    v11 = byte_1C0092619;
  }
  v14 = -1073741637;
LABEL_16:
  if ( v14 != 259 )
  {
LABEL_17:
    a3->IoStatus.Status = v14;
    if ( v14 == -1073741789 )
    {
      v15 = (unsigned int)v23;
    }
    else
    {
      if ( v14 >= 0 )
        v4 = v23;
      v15 = v4;
    }
    a3->IoStatus.Information = v15;
    IofCompleteRequest(a3, 0);
    v11 = byte_1C0092619;
    goto LABEL_22;
  }
  a3->Tail.Overlay.CurrentStackLocation->Control |= 1u;
LABEL_22:
  if ( (unsigned __int8)v11 >= 4u )
    WPP_SF_qD(0x55u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2, v14);
  return v14;
}
