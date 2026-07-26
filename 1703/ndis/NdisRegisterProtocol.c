/*
 * XREFs of NdisRegisterProtocol @ 0x1C00DC150
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C001D1C4 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_Z @ 0x1C0044008 (WPP_SF_Z.c)
 *     WPP_SF_qZL @ 0x1C0051670 (WPP_SF_qZL.c)
 *     ndisReferencePackage @ 0x1C00A502C (ndisReferencePackage.c)
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z @ 0x1C00B24A4 (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z.c)
 *     ndisInitializeRef @ 0x1C00B6E54 (ndisInitializeRef.c)
 *     ?reset@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x1C00B81A0 (-reset@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z.c)
 *     ??4?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00B81D0 (--4-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ndisWriteDriverNDISVersionToServiceKey @ 0x1C00B83FC (ndisWriteDriverNDISVersionToServiceKey.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00DBF50 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 *     ndisValidateLegacyProtocols @ 0x1C00DC8AC (ndisValidateLegacyProtocols.c)
 */

_QWORD *__fastcall NdisRegisterProtocol(int *a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rdi
  int v9; // ebx
  _QWORD *result; // rax
  unsigned __int16 v11; // ax
  _WORD *v12; // r15
  volatile signed __int32 **ProtocolDriver; // rax
  _QWORD *v14; // rbx
  void *v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  volatile signed __int32 *v18; // rbx
  unsigned __int16 v19; // bp
  PVOID PoolWithTag; // rax
  __int64 v21; // [rsp+20h] [rbp-48h]
  PVOID P[2]; // [rsp+30h] [rbp-38h] BYREF
  PVOID v23; // [rsp+80h] [rbp+18h] BYREF

  v23 = 0LL;
  v8 = 0LL;
  if ( !ndisNsiInitialized )
    RtlRunOnceExecuteOnce(&ndisNsiInitOnceBlock, (PRTL_RUN_ONCE_INIT_FN)ndisInitializeNsiInitFn, 0LL, 0LL);
  if ( (unsigned __int8)byte_1C009260C >= 4u )
    WPP_SF_Z(0xEu, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, (const wchar_t *)(a3 + 88));
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( *(_BYTE *)a3 < 4u )
  {
    DbgPrint("Ndis: NdisRegisterProtocol Ndis 3.0 protocols are not supported.\n");
LABEL_7:
    v9 = -1073676284;
    goto LABEL_8;
  }
  if ( *(_BYTE *)a3 != 4 || *(_BYTE *)(a3 + 1) )
  {
    if ( *(_BYTE *)a3 != 5 || *(_BYTE *)(a3 + 1) > 1u )
      goto LABEL_7;
    v11 = 208;
  }
  else
  {
    v11 = 144;
  }
  if ( a4 >= v11 && (unsigned __int8)ndisValidateLegacyProtocols(a3) )
  {
    v12 = (_WORD *)(a3 + 88);
    ProtocolDriver = (volatile signed __int32 **)ndisBindGetProtocolDriver(
                                                   P,
                                                   (const struct _UNICODE_STRING *)(a3 + 88),
                                                   1);
    KRef<NDIS_BIND_PROTOCOL_DRIVER>::operator=((volatile signed __int32 **)&v23, ProtocolDriver);
    v14 = P[0];
    if ( P[0] && _InterlockedExchangeAdd((volatile signed __int32 *)P[0] + 14, 0xFFFFFFFF) == 1 && v14 )
    {
      v15 = (void *)v14[4];
      if ( v15 )
        ExFreePoolWithTag(v15, 0x7274534Bu);
      v16 = v14[2];
      v17 = (_QWORD *)v14[3];
      if ( *(_QWORD **)(v16 + 8) != v14 + 2 || (_QWORD *)*v17 != v14 + 2 )
        __fastfail(3u);
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      ExFreePoolWithTag(v14, 0x44745042u);
    }
    v18 = (volatile signed __int32 *)v23;
    if ( v23
      && (v19 = *v12 + 986,
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v19, 0x6270444Eu),
          (v8 = (__int64)PoolWithTag) != 0) )
    {
      memset(PoolWithTag, 0, v19);
      *(_QWORD *)(v8 + 920) = 0LL;
      *(_QWORD *)(v8 + 968) = _NDIS_PROTOCOL_BLOCK::NotifyBindComplete;
      *(_QWORD *)(v8 + 960) = v8;
      *(_QWORD *)(v8 + 944) = KWorkItemBase<MINIPORT_HOOK_DRIVER,KCoalescingWorkItem<MINIPORT_HOOK_DRIVER>>::CallbackThunk;
      *(_QWORD *)(v8 + 952) = v8 + 928;
      *(_QWORD *)(v8 + 928) = 0LL;
      *(_DWORD *)(v8 + 976) = 0;
      if ( (PVOID *)(v8 + 920) != &v23 )
        KRef<NDIS_BIND_PROTOCOL_DRIVER>::reset((volatile signed __int32 **)(v8 + 920), v18);
      KeInitializeMutex((PRKMUTEX)(v8 + 360), 0xFFFFu);
      *(_WORD *)v8 = 259;
      *(_WORD *)(v8 + 2) = v19;
      *(_BYTE *)(v8 + 56) = *(_BYTE *)a3;
      *(_BYTE *)(v8 + 57) = *(_BYTE *)(a3 + 1);
      *(_QWORD *)(v8 + 80) = v8 + 984;
      *(_DWORD *)(v8 + 60) = *(_DWORD *)(a3 + 4);
      *(_DWORD *)(v8 + 64) = *(_DWORD *)(a3 + 4) & 0xF0000000;
      *(_WORD *)(v8 + 72) = *v12;
      *(_WORD *)(v8 + 74) = *v12;
      RtlUpcaseUnicodeString((PUNICODE_STRING)(v8 + 72), (PCUNICODE_STRING)(a3 + 88), 0);
      *(_QWORD *)(v8 + 224) = *(_QWORD *)(a3 + 8);
      *(_QWORD *)(v8 + 232) = *(_QWORD *)(a3 + 16);
      *(_QWORD *)(v8 + 240) = *(_QWORD *)(a3 + 24);
      *(_QWORD *)(v8 + 248) = *(_QWORD *)(a3 + 32);
      *(_QWORD *)(v8 + 256) = *(_QWORD *)(a3 + 40);
      *(_QWORD *)(v8 + 152) = *(_QWORD *)(a3 + 48);
      *(_QWORD *)(v8 + 264) = *(_QWORD *)(a3 + 56);
      *(_QWORD *)(v8 + 272) = *(_QWORD *)(a3 + 64);
      *(_QWORD *)(v8 + 160) = *(_QWORD *)(a3 + 72);
      *(_QWORD *)(v8 + 168) = *(_QWORD *)(a3 + 80);
      if ( *(_BYTE *)a3 >= 4u )
      {
        *(_QWORD *)(v8 + 280) = *(_QWORD *)(a3 + 104);
        *(_QWORD *)(v8 + 288) = *(_QWORD *)(a3 + 112);
        *(_QWORD *)(v8 + 296) = *(_QWORD *)(a3 + 120);
        *(_QWORD *)(v8 + 128) = *(_QWORD *)(a3 + 128);
        *(_QWORD *)(v8 + 136) = *(_QWORD *)(a3 + 136);
      }
      if ( *(_BYTE *)a3 == 5 )
      {
        *(_QWORD *)(v8 + 304) = *(_QWORD *)(a3 + 176);
        *(_QWORD *)(v8 + 192) = *(_QWORD *)(a3 + 184);
        *(_QWORD *)(v8 + 312) = *(_QWORD *)(a3 + 192);
        *(_QWORD *)(v8 + 200) = *(_QWORD *)(a3 + 200);
      }
      *a2 = v8;
      ndisInitializeRef(v8 + 32, 15);
      ndisRegisterProtocolDriverCommon((struct _NDIS_PROTOCOL_BLOCK *)v8);
      ndisWriteDriverNDISVersionToServiceKey(
        *(unsigned __int8 *)(v8 + 56),
        *(unsigned __int8 *)(v8 + 57),
        0,
        0,
        0,
        v8 + 72);
      v9 = 0;
    }
    else
    {
      v9 = -1073741670;
    }
  }
  else
  {
    v9 = -1073676283;
  }
LABEL_8:
  *a1 = v9;
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C009260C >= 4u )
  {
    LODWORD(v21) = v9;
    WPP_SF_qZL(0xFu, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, v8, (const wchar_t *)(a3 + 88), v21);
  }
  result = v23;
  if ( v23 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v23 + 14, 0xFFFFFFFF) == 1 )
      return KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'(v23);
  }
  return result;
}
