/*
 * XREFs of xxxClientCallDevCallbackSimple @ 0x1C01419A8
 * Callers:
 *     EditionInputExtensibilityCallout @ 0x1C011C660 (EditionInputExtensibilityCallout.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall xxxClientCallDevCallbackSimple(__int64 a1, __int64 a2)
{
  _OWORD *v4; // rax
  _OWORD *v5; // rcx
  __int64 v6; // rdx
  int v7; // ebx
  __int64 *v8; // rcx
  __int64 v9; // rdx
  ULONG64 v11; // rcx
  __int64 v12; // xmm1_8
  int v13; // [rsp+30h] [rbp-178h] BYREF
  _QWORD v14[5]; // [rsp+38h] [rbp-170h] BYREF
  _QWORD v15[38]; // [rsp+60h] [rbp-148h] BYREF

  memset(v15, 0, sizeof(v15));
  v15[5] = a1;
  v4 = (_OWORD *)a2;
  v5 = &v15[6];
  v6 = 2LL;
  do
  {
    *v5 = *v4;
    v5[1] = v4[1];
    v5[2] = v4[2];
    v5[3] = v4[3];
    v5[4] = v4[4];
    v5[5] = v4[5];
    v5[6] = v4[6];
    v5 += 8;
    *(v5 - 1) = v4[7];
    v4 += 8;
    --v6;
  }
  while ( v6 );
  EtwTraceBeginCallback(124LL);
  v7 = KeUserModeCallback(124LL, v15, 304LL, v14, &v13);
  EtwTraceEndCallback(124LL);
  if ( v7 < 0 || v13 != 24 )
    return 0LL;
  v8 = (__int64 *)v14[0];
  if ( (unsigned __int64)(v14[0] + 8LL) < v14[0] || v14[0] + 8LL > MmUserProbeAddress )
    v8 = (__int64 *)MmUserProbeAddress;
  v9 = *v8;
  v14[1] = *v8;
  if ( *(_DWORD *)(a2 + 4) == 3 )
  {
    v11 = *(_QWORD *)(v14[0] + 16LL);
    if ( v11 + 24 < v11 || v11 + 24 > MmUserProbeAddress )
      v11 = MmUserProbeAddress;
    v12 = *(_QWORD *)(v11 + 16);
    *(_OWORD *)(a2 + 56) = *(_OWORD *)v11;
    *(_QWORD *)(a2 + 72) = v12;
  }
  return (unsigned int)v9;
}
