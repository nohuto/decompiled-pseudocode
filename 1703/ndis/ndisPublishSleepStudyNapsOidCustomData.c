/*
 * XREFs of ndisPublishSleepStudyNapsOidCustomData @ 0x1C00EA448
 * Callers:
 *     ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEBU_GUID@@@Z @ 0x1C00EA690 (-ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEBU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     Template_cjqzr2jx @ 0x1C0073244 (Template_cjqzr2jx.c)
 *     ?ndisPublishSleepStudyCustomData@@YAXEPEBU_GUID@@PEBG_K@Z @ 0x1C00E9F64 (-ndisPublishSleepStudyCustomData@@YAXEPEBU_GUID@@PEBG_K@Z.c)
 */

void __fastcall ndisPublishSleepStudyNapsOidCustomData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _BYTE *a7)
{
  unsigned __int16 v7; // ax
  char v8; // si
  _DWORD *v9; // rbx
  __int64 v10; // rdi
  struct _GUID v11; // [rsp+50h] [rbp-38h] BYREF

  v7 = *(_WORD *)(a1 + 4080);
  v8 = a2;
  v11 = GUID_CS_BLOCKER_GEN;
  v11.Data3 = v7;
  LOBYTE(v7) = *a7;
  ++*(_DWORD *)a7;
  v11.Data4[0] = v7 | 0x80;
  if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
    Template_cjqzr2jx(a1, a2, (const GUID *)(a1 + 4032), a2, a3, *(_DWORD *)(a4 + 8), *(_QWORD *)a4, (__int64)&v11, 0);
  v9 = (_DWORD *)(a6 + 8);
  v10 = 8LL;
  do
  {
    if ( *v9 )
    {
      ndisPublishSleepStudyCustomData(v8, &v11, L"OID", (unsigned int)*v9);
      ndisPublishSleepStudyCustomData(v8, &v11, L"WakeCount", *((unsigned __int16 *)v9 - 4));
      ndisPublishSleepStudyCustomData(v8, &v11, L"BusyCount", *((unsigned __int16 *)v9 - 3));
    }
    v9 += 3;
    --v10;
  }
  while ( v10 );
}
