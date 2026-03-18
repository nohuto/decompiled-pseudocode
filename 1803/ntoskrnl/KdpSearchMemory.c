/*
 * XREFs of KdpSearchMemory @ 0x140804AC0
 * Callers:
 *     KdpSendWaitContinue @ 0x140804F74 (KdpSendWaitContinue.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MmDbgCopyMemory @ 0x140261418 (MmDbgCopyMemory.c)
 *     KdpQuickMoveMemory @ 0x1408068D4 (KdpQuickMoveMemory.c)
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
  unsigned int v12; // ecx
  __int64 v13; // r15
  _BYTE *v14; // r14
  unsigned int v15; // r12d
  char *v16; // rsi
  char v18[4]; // [rsp+30h] [rbp-39h] BYREF
  int v19; // [rsp+34h] [rbp-35h] BYREF
  __int64 v20; // [rsp+38h] [rbp-31h]
  __int64 v21; // [rsp+40h] [rbp-29h]
  unsigned __int64 v22; // [rsp+48h] [rbp-21h]
  int v23; // [rsp+50h] [rbp-19h] BYREF
  __int64 v24; // [rsp+58h] [rbp-11h]
  _DWORD v25[4]; // [rsp+60h] [rbp-9h] BYREF
  _DWORD v26[4]; // [rsp+70h] [rbp+7h]

  v2 = *(_QWORD *)(a2 + 8);
  v3 = a1;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = -1;
  v6 = *(_DWORD *)(a1 + 32);
  v7 = v4 + *(_QWORD *)(a1 + 24);
  v21 = a1;
  v20 = v2;
  v22 = v7;
  *(_DWORD *)(a1 + 8) = -2147483622;
  if ( v6 <= 3 )
    v5 = 0xFFFFFFFF >> (8 * (4 - v6));
  v25[0] = 0;
  v26[0] = v5;
  v8 = 4LL;
  v26[1] = v5 << 8;
  v26[3] = v5 << 24;
  v26[2] = v5 << 16;
  if ( v6 < 5 )
    v8 = v6;
  KdpQuickMoveMemory(v25, v2, v8);
  v9 = v4 & 3;
  v25[1] = v25[0] << 8;
  v10 = (char *)(v4 & 0xFFFFFFFFFFFFFFFCuLL);
  v25[2] = v25[0] << 16;
  v25[3] = v25[0] << 24;
  if ( (unsigned __int64)v10 < v11 )
  {
    while ( (int)MmDbgCopyMemory(v10, &v19, 4u, 4u, 4u) < 0 )
    {
LABEL_18:
      v10 += 4;
      v9 = 0;
      if ( (unsigned __int64)v10 >= v22 )
        goto LABEL_21;
    }
    v12 = v6 - 4;
    v13 = v9;
    while ( 1 )
    {
      if ( (v19 & v26[v13]) == v25[v13] )
      {
        if ( 4 - v9 >= v6 )
          goto LABEL_20;
        v14 = (_BYTE *)(v2 - v9 + 4);
        v15 = v12 + v9;
        if ( !(v12 + v9) )
          goto LABEL_20;
        v16 = &v10[v9 - v20];
        do
        {
          if ( (int)MmDbgCopyMemory(&v14[(_QWORD)v16], v18, 1u, 1u, 4u) < 0 )
            break;
          if ( v18[0] != *v14 )
            break;
          ++v14;
          --v15;
        }
        while ( v15 );
        v3 = v21;
        if ( !v15 )
        {
LABEL_20:
          *(_DWORD *)(v3 + 8) = 0;
          *(_QWORD *)(v3 + 16) = &v10[v9];
          break;
        }
        v2 = v20;
        v12 = v6 - 4;
      }
      ++v9;
      ++v13;
      if ( v9 >= 4 )
        goto LABEL_18;
    }
  }
LABEL_21:
  v23 = 3670072;
  v24 = v3;
  return KdSendPacket(2LL, &v23, 0LL, &KdpContext);
}
