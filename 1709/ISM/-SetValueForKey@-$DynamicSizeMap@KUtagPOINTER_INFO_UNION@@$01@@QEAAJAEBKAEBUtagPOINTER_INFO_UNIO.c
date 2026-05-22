/*
 * XREFs of ?SetValueForKey@?$DynamicSizeMap@KUtagPOINTER_INFO_UNION@@$01@@QEAAJAEBKAEBUtagPOINTER_INFO_UNION@@@Z @ 0x18007057C
 * Callers:
 *     ?OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x18006FC40 (-OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800CC377 (memcpy_0.c)
 */

__int64 __fastcall DynamicSizeMap<unsigned long,tagPOINTER_INFO_UNION,2>::SetValueForKey(
        __int64 a1,
        int *a2,
        _OWORD *a3)
{
  int v3; // r11d
  int v5; // r10d
  char v6; // r8
  unsigned int v7; // ebx
  unsigned int v8; // r15d
  char v11; // bl
  int v12; // r9d
  unsigned int v13; // edx
  __int64 v14; // rcx
  char *v15; // r14
  __int64 v16; // rax
  char *v17; // rcx
  char *v18; // r14
  unsigned int v19; // ebx
  void *v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx

  v3 = *a2;
  v5 = *(_DWORD *)(a1 + 16);
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( *a2 == v5 )
  {
    v11 = 87;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_5;
    v12 = 153;
LABEL_4:
    McTemplateU0qqq(a1, &MinInput_Warning_CheckResult, 0, v12, v11);
LABEL_5:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v13 = *(_DWORD *)(a1 + 8);
  v14 = 0LL;
  if ( !v13 )
    goto LABEL_16;
  v15 = *(char **)a1;
  do
  {
    v16 = 152LL * (unsigned int)v14;
    if ( *(_DWORD *)&v15[v16] == v3 )
    {
      v17 = &v15[152 * (unsigned int)v14];
      *(_OWORD *)(v17 + 8) = *a3;
      *(_OWORD *)(v17 + 24) = a3[1];
      *(_OWORD *)(v17 + 40) = a3[2];
      *(_OWORD *)(v17 + 56) = a3[3];
      *(_OWORD *)(v17 + 72) = a3[4];
      *(_OWORD *)(v17 + 88) = a3[5];
      *(_OWORD *)(v17 + 104) = a3[6];
      *(_OWORD *)(v17 + 120) = a3[7];
      *(_OWORD *)(v17 + 136) = a3[8];
      return v7;
    }
    if ( !v6 && *(_DWORD *)&v15[v16] == v5 )
    {
      v8 = v14;
      v6 = 1;
    }
    v14 = (unsigned int)(v14 + 1);
  }
  while ( (unsigned int)v14 < v13 );
  if ( v6 )
  {
LABEL_28:
    v23 = 152LL * v8;
    *(_DWORD *)(v23 + *(_QWORD *)a1) = *a2;
    v24 = v23 + *(_QWORD *)a1;
    *(_OWORD *)(v24 + 8) = *a3;
    *(_OWORD *)(v24 + 24) = a3[1];
    *(_OWORD *)(v24 + 40) = a3[2];
    *(_OWORD *)(v24 + 56) = a3[3];
    *(_OWORD *)(v24 + 72) = a3[4];
    *(_OWORD *)(v24 + 88) = a3[5];
    *(_OWORD *)(v24 + 104) = a3[6];
    *(_OWORD *)(v24 + 120) = a3[7];
    *(_OWORD *)(v24 + 136) = a3[8];
    ++*(_DWORD *)(a1 + 12);
    return 0;
  }
LABEL_16:
  if ( *(_DWORD *)(a1 + 12) == v13 )
  {
    v18 = *(char **)a1;
    v19 = 2 * v13;
    v8 = v13;
    v20 = operator new[](saturated_mul(2 * v13, 0x98uLL));
    *(_QWORD *)a1 = v20;
    if ( !v20 )
    {
      v11 = 14;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_5;
      McTemplateU0qqq(0LL, &MinInput_Warning_CheckResult, 0, 387, 14);
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_5;
      v12 = 185;
      goto LABEL_4;
    }
    memcpy_0(v20, v18, 152LL * *(unsigned int *)(a1 + 8));
    if ( *(_DWORD *)(a1 + 8) < v19 )
    {
      v21 = 152LL * *(unsigned int *)(a1 + 8);
      v22 = v19 - *(_DWORD *)(a1 + 8);
      do
      {
        *(_DWORD *)(v21 + *(_QWORD *)a1) = *(_DWORD *)(a1 + 16);
        v21 += 152LL;
        --v22;
      }
      while ( v22 );
    }
    *(_DWORD *)(a1 + 8) = v19;
    operator delete(v18);
    goto LABEL_28;
  }
  v7 = -2147467259;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(v14, &MinInput_Warning_CheckResult, 0, 180, 5);
  return v7;
}
