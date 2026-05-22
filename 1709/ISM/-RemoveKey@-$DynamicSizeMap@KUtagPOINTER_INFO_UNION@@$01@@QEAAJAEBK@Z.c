/*
 * XREFs of ?RemoveKey@?$DynamicSizeMap@KUtagPOINTER_INFO_UNION@@$01@@QEAAJAEBK@Z @ 0x18007080C
 * Callers:
 *     ?OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x18006FC40 (-OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

__int64 __fastcall DynamicSizeMap<unsigned long,tagPOINTER_INFO_UNION,2>::RemoveKey(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  unsigned int v4; // r8d
  __int64 v5; // r9
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  _OWORD v16[9]; // [rsp+30h] [rbp-98h] BYREF

  v2 = 0;
  v3 = a1;
  v4 = 0;
  if ( *(_DWORD *)(a1 + 8) )
  {
    v5 = *(_QWORD *)a1;
    while ( 1 )
    {
      a1 = v4;
      if ( *(_DWORD *)(152LL * v4 + v5) == *a2 )
        break;
      if ( ++v4 >= *(_DWORD *)(v3 + 8) )
        goto LABEL_5;
    }
    v7 = 152LL * v4;
    *(_DWORD *)(v7 + v5) = *(_DWORD *)(v3 + 16);
    memset(v16, 0, sizeof(v16));
    v8 = v7 + *(_QWORD *)v3;
    v9 = v16[1];
    *(_OWORD *)(v8 + 8) = v16[0];
    v10 = v16[2];
    *(_OWORD *)(v8 + 24) = v9;
    v11 = v16[3];
    *(_OWORD *)(v8 + 40) = v10;
    v12 = v16[4];
    *(_OWORD *)(v8 + 56) = v11;
    v13 = v16[5];
    *(_OWORD *)(v8 + 72) = v12;
    v14 = v16[6];
    *(_OWORD *)(v8 + 88) = v13;
    v15 = v16[8];
    *(_OWORD *)(v8 + 104) = v14;
    *(_OWORD *)(v8 + 120) = v16[7];
    *(_OWORD *)(v8 + 136) = v15;
    --*(_DWORD *)(v3 + 12);
  }
  else
  {
LABEL_5:
    v2 = -2147467259;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(a1, &MinInput_Warning_CheckResult, 0, 221, 5);
  }
  return v2;
}
