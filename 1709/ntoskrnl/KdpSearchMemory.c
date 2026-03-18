/*
 * XREFs of KdpSearchMemory @ 0x140797A0C
 * Callers:
 *     KdpSendWaitContinue @ 0x140797EA0 (KdpSendWaitContinue.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MmDbgCopyMemory @ 0x140228280 (MmDbgCopyMemory.c)
 *     KdpQuickMoveMemory @ 0x1407997EC (KdpQuickMoveMemory.c)
 */

__int64 __fastcall KdpSearchMemory(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rsi
  __int64 v4; // rbx
  unsigned int v5; // edx
  unsigned int v6; // r13d
  unsigned __int64 v7; // r10
  __int64 v8; // r8
  unsigned int v9; // edi
  char *v10; // rbx
  unsigned __int64 v11; // r10
  __int64 v12; // r15
  _BYTE *v13; // r14
  unsigned int v14; // r12d
  char *v15; // rsi
  char v17[4]; // [rsp+30h] [rbp-39h] BYREF
  int v18; // [rsp+34h] [rbp-35h] BYREF
  __int64 v19; // [rsp+38h] [rbp-31h]
  __int64 v20; // [rsp+40h] [rbp-29h]
  unsigned __int64 v21; // [rsp+48h] [rbp-21h]
  int v22; // [rsp+50h] [rbp-19h] BYREF
  __int64 v23; // [rsp+58h] [rbp-11h]
  _DWORD v24[4]; // [rsp+60h] [rbp-9h] BYREF
  _DWORD v25[4]; // [rsp+70h] [rbp+7h]

  v2 = *(_QWORD *)(a2 + 8);
  v3 = a1;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = -1;
  v6 = *(_DWORD *)(a1 + 32);
  v7 = v4 + *(_QWORD *)(a1 + 24);
  v20 = a1;
  v19 = v2;
  v21 = v7;
  *(_DWORD *)(a1 + 8) = -2147483622;
  if ( v6 <= 3 )
    v5 = 0xFFFFFFFF >> (8 * (4 - v6));
  v24[0] = 0;
  v25[0] = v5;
  v8 = 4LL;
  v25[1] = v5 << 8;
  v25[3] = v5 << 24;
  v25[2] = v5 << 16;
  if ( v6 < 5 )
    v8 = v6;
  KdpQuickMoveMemory(v24, v2, v8);
  v9 = v4 & 3;
  v24[1] = v24[0] << 8;
  v10 = (char *)(v4 & 0xFFFFFFFFFFFFFFFCuLL);
  v24[2] = v24[0] << 16;
  v24[3] = v24[0] << 24;
  if ( (unsigned __int64)v10 < v11 )
  {
    while ( (int)MmDbgCopyMemory(v10, &v18, 4u, 4u, 4u) < 0 )
    {
LABEL_18:
      v10 += 4;
      v9 = 0;
      if ( (unsigned __int64)v10 >= v21 )
        goto LABEL_21;
    }
    v12 = v9;
    while ( 1 )
    {
      if ( (v18 & v25[v12]) == v24[v12] )
      {
        if ( 4 - v9 >= v6 )
          goto LABEL_20;
        v13 = (_BYTE *)(v2 - v9 + 4);
        v14 = v9 + v6 - 4;
        if ( !v14 )
          goto LABEL_20;
        v15 = &v10[v9 - v19];
        do
        {
          if ( (int)MmDbgCopyMemory(&v13[(_QWORD)v15], v17, 1u, 1u, 4u) < 0 )
            break;
          if ( v17[0] != *v13 )
            break;
          ++v13;
          --v14;
        }
        while ( v14 );
        v3 = v20;
        if ( !v14 )
        {
LABEL_20:
          *(_DWORD *)(v3 + 8) = 0;
          *(_QWORD *)(v3 + 16) = &v10[v9];
          break;
        }
        v2 = v19;
      }
      ++v9;
      ++v12;
      if ( v9 >= 4 )
        goto LABEL_18;
    }
  }
LABEL_21:
  v22 = 3670072;
  v23 = v3;
  return KdSendPacket(2LL, &v22, 0LL, &KdpContext);
}
