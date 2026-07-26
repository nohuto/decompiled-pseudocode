/*
 * XREFs of ndisFDoDirectOidRequestInternal @ 0x1C0043C00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_qqDD @ 0x1C0039564 (WPP_SF_qqDD.c)
 *     ndisFInvokeDirectOidRequest @ 0x1C0059504 (ndisFInvokeDirectOidRequest.c)
 */

void __fastcall ndisFDoDirectOidRequestInternal(_QWORD *Parameter)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  KIRQL v4; // r12
  unsigned int v5; // edx
  int v6; // r15d
  KIRQL v7; // dl
  KSPIN_LOCK *v8; // rcx
  KIRQL v9; // al
  int v10; // [rsp+20h] [rbp-28h]
  unsigned int v11; // [rsp+28h] [rbp-20h]

  v1 = Parameter[1];
  v3 = Parameter[3];
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x34u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v1, v3);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 144));
  v5 = *(_DWORD *)(v1 + 856);
  *(_QWORD *)(v1 + 152) = KeGetCurrentThread();
  *(_DWORD *)(v1 + 160) = 2297834;
  if ( v5 >= 0x4E20 )
  {
    if ( (unsigned __int8)byte_1C0098752 >= 2u )
    {
      v11 = v5;
      v10 = 20000;
      WPP_SF_qqDD(0x35u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v1, v3, v10, v11);
    }
    v6 = -1073741670;
    v7 = v4;
LABEL_11:
    *(_QWORD *)(v1 + 152) = 0LL;
    v8 = (KSPIN_LOCK *)(v1 + 144);
    *(_DWORD *)(v1 + 160) = 0;
    goto LABEL_12;
  }
  *(_QWORD *)(v1 + 152) = 0LL;
  v8 = (KSPIN_LOCK *)(v1 + 144);
  *(_DWORD *)(v1 + 160) = 0;
  if ( (*(_DWORD *)(v1 + 56) & 0x10000) == 0 )
  {
    *(_DWORD *)(v1 + 856) = v5 + 1;
    KeReleaseSpinLock(v8, v4);
    *(_DWORD *)(v3 + 88) |= 0x20000u;
    v6 = ndisFInvokeDirectOidRequest(v1, v3);
    if ( v6 == 259 )
      goto LABEL_13;
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 144));
    --*(_DWORD *)(v1 + 856);
    v7 = v9;
    goto LABEL_11;
  }
  v6 = -1073676286;
  v7 = v4;
LABEL_12:
  KeReleaseSpinLock(v8, v7);
LABEL_13:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x36u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v1, v3);
  *(_DWORD *)Parameter = v6;
}
