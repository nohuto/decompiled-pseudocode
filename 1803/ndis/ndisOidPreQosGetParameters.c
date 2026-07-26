/*
 * XREFs of ndisOidPreQosGetParameters @ 0x1C00476A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 */

unsigned __int8 __fastcall ndisOidPreQosGetParameters(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  unsigned __int8 v4; // bl
  KIRQL v5; // r12
  unsigned __int16 *v6; // r14
  unsigned int v7; // eax
  int v9; // [rsp+20h] [rbp-78h]
  _DWORD v10[14]; // [rsp+30h] [rbp-68h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  v4 = 0;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(0x82u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v3, v1);
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v1 + 48) >= 0x34u )
  {
    if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
      goto LABEL_6;
    if ( !v3 )
      goto LABEL_19;
    if ( !*(_QWORD *)(v3 + 4936) )
    {
LABEL_6:
      *(_DWORD *)(a1 + 40) = -1073741637;
    }
    else
    {
      v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
      *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v3 + 1856) = 2304740;
      if ( *(_DWORD *)(v1 + 32) == -66781180 )
        v6 = *(unsigned __int16 **)(v3 + 4952);
      else
        v6 = *(unsigned __int16 **)(v3 + 4968);
      if ( !v6 )
      {
        memset(v10, 0, 0x34uLL);
        v10[0] = 3408310;
        v6 = (unsigned __int16 *)v10;
      }
      *(_DWORD *)(a1 + 40) = 0;
      v7 = v6[1];
      if ( *(_DWORD *)(v1 + 48) >= v7 )
      {
        memmove(*(void **)(v1 + 40), v6, v6[1]);
        *(_DWORD *)(v1 + 52) = v6[1];
      }
      else
      {
        *(_DWORD *)(v1 + 56) = v7;
        *(_DWORD *)(a1 + 40) = -1073676268;
      }
      *(_QWORD *)(v3 + 520) = 0LL;
      *(_DWORD *)(v3 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v5);
    }
  }
  else
  {
    *(_DWORD *)(v1 + 56) = 52;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  v4 = 1;
LABEL_19:
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    v9 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0x83u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v3, v4, v9);
  }
  return v4;
}
