/*
 * XREFs of ?RemoveKey@?$DynamicSizeMap@_KUPreviousState@InputInfoSanitizer@@$00@@QEAAJAEB_K@Z @ 0x1800A3C8C
 * Callers:
 *     ?OnInputReport@InputInfoSanitizer@@AEAAJPEAUInputInfo@@_N@Z @ 0x1800A2CE8 (-OnInputReport@InputInfoSanitizer@@AEAAJPEAUInputInfo@@_N@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

__int64 __fastcall DynamicSizeMap<unsigned __int64,InputInfoSanitizer::PreviousState,1>::RemoveKey(
        __int64 *a1,
        _QWORD *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v7; // rax
  __int64 v8; // rsi
  int *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _OWORD *v12; // rax
  __int64 v13; // rdx
  _OWORD *v14; // rcx
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  _BYTE v22[520]; // [rsp+30h] [rbp-228h] BYREF
  int v23; // [rsp+238h] [rbp-20h]
  int v24; // [rsp+23Ch] [rbp-1Ch]

  v3 = 0;
  v4 = 0LL;
  if ( *((_DWORD *)a1 + 2) )
  {
    v5 = *a1;
    while ( *(_QWORD *)(536LL * (unsigned int)v4 + v5) != *a2 )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *((_DWORD *)a1 + 2) )
        goto LABEL_5;
    }
    v7 = a1[2];
    v23 = -1;
    v8 = 536LL * (unsigned int)v4;
    *(_QWORD *)(v8 + v5) = v7;
    memset(v22, 0, sizeof(v22));
    v9 = (int *)v22;
    v10 = 10LL;
    do
    {
      *v9 = v23;
      v9 += 13;
      --v10;
    }
    while ( v10 );
    v11 = *a1;
    v12 = v22;
    v13 = 4LL;
    v24 = 0;
    v14 = (_OWORD *)(v8 + v11 + 8);
    do
    {
      v15 = v12[1];
      *v14 = *v12;
      v16 = v12[2];
      v14[1] = v15;
      v17 = v12[3];
      v14[2] = v16;
      v18 = v12[4];
      v14[3] = v17;
      v19 = v12[5];
      v14[4] = v18;
      v20 = v12[6];
      v14[5] = v19;
      v21 = v12[7];
      v12 += 8;
      v14[6] = v20;
      v14 += 8;
      *(v14 - 1) = v21;
      --v13;
    }
    while ( v13 );
    *v14 = *v12;
    --*((_DWORD *)a1 + 3);
  }
  else
  {
LABEL_5:
    v3 = -2147467259;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v4, &MinInput_Warning_CheckResult, 0, 221, 5);
  }
  return v3;
}
