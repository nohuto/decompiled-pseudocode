/*
 * XREFs of ?SetValueForKey@?$DynamicSizeMap@KK$01@@QEAAJAEBK0@Z @ 0x18007090C
 * Callers:
 *     ?OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x18006FC40 (-OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800CC377 (memcpy_0.c)
 */

__int64 __fastcall DynamicSizeMap<unsigned long,unsigned long,2>::SetValueForKey(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // r15d
  char v5; // r9
  char v9; // bl
  int v10; // r9d
  __int64 v11; // rcx
  __int64 v12; // rax
  _DWORD *v13; // r8
  int v14; // r10d
  _DWORD *v15; // rsi
  unsigned int v16; // ebx
  void *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9

  v3 = 0;
  v4 = 0;
  v5 = 0;
  if ( *a2 == *(_DWORD *)(a1 + 16) )
  {
    v9 = 87;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_5;
    v10 = 153;
LABEL_4:
    McTemplateU0qqq(a1, &MinInput_Warning_CheckResult, 0, v10, v9);
LABEL_5:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v11 = *(unsigned int *)(a1 + 8);
  v12 = 0LL;
  if ( !(_DWORD)v11 )
    goto LABEL_16;
  v13 = *(_DWORD **)a1;
  do
  {
    v14 = v13[2 * v12];
    if ( v14 == *a2 )
    {
      v13[2 * (unsigned int)v12 + 1] = *a3;
      return v3;
    }
    if ( !v5 && v14 == *(_DWORD *)(a1 + 16) )
    {
      v4 = v12;
      v5 = 1;
    }
    v12 = (unsigned int)(v12 + 1);
  }
  while ( (unsigned int)v12 < (unsigned int)v11 );
  if ( v5 )
  {
LABEL_28:
    *(_DWORD *)(*(_QWORD *)a1 + 8LL * v4) = *a2;
    *(_DWORD *)(*(_QWORD *)a1 + 8LL * v4 + 4) = *a3;
    ++*(_DWORD *)(a1 + 12);
    return 0;
  }
LABEL_16:
  if ( *(_DWORD *)(a1 + 12) == (_DWORD)v11 )
  {
    v15 = *(_DWORD **)a1;
    v16 = 2 * v11;
    v4 = v11;
    v17 = operator new[](saturated_mul((unsigned int)(2 * v11), 8uLL));
    *(_QWORD *)a1 = v17;
    if ( !v17 )
    {
      v9 = 14;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_5;
      McTemplateU0qqq(v18, &MinInput_Warning_CheckResult, 0, 387, 14);
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_5;
      v10 = 185;
      goto LABEL_4;
    }
    memcpy_0(v17, v15, 8LL * *(unsigned int *)(a1 + 8));
    if ( *(_DWORD *)(a1 + 8) < v16 )
    {
      v19 = 8LL * *(unsigned int *)(a1 + 8);
      v20 = v16 - *(_DWORD *)(a1 + 8);
      do
      {
        *(_DWORD *)(v19 + *(_QWORD *)a1) = *(_DWORD *)(a1 + 16);
        v19 += 8LL;
        --v20;
      }
      while ( v20 );
    }
    *(_DWORD *)(a1 + 8) = v16;
    operator delete(v15);
    goto LABEL_28;
  }
  v3 = -2147467259;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(v11, &MinInput_Warning_CheckResult, 0, 180, 5);
  return v3;
}
