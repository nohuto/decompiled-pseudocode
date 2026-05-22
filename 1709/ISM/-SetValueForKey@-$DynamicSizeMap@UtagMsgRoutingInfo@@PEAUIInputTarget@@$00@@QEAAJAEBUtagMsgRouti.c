/*
 * XREFs of ?SetValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRoutingInfo@@AEBQEAUIInputTarget@@@Z @ 0x18001EC18
 * Callers:
 *     ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x1800191F0 (-RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 *     ?UnregisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@@Z @ 0x180019600 (-UnregisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x180024078 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800CC377 (memcpy_0.c)
 */

__int64 __fastcall DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::SetValueForKey(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // r14
  unsigned int v7; // ebx
  unsigned int v8; // r12d
  __int64 v9; // rcx
  char v10; // bl
  int v11; // r9d
  unsigned int v12; // r10d
  __int64 v13; // r8
  _QWORD *v14; // rsi
  __int64 v15; // r8
  char v16; // r11
  _QWORD *v17; // rsi
  unsigned int v18; // ebx
  void *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx

  v4 = a1 + 16;
  v7 = 0;
  v8 = 0;
  if ( (unsigned __int8)operator==(a2, a1 + 16) )
  {
    v10 = 87;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_5;
    v11 = 153;
LABEL_4:
    McTemplateU0qqq(v9, &MinInput_Warning_CheckResult, 0, v11, v10);
LABEL_5:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v12 = *(_DWORD *)(a1 + 8);
  v13 = 0LL;
  if ( !v12 )
    goto LABEL_16;
  v14 = *(_QWORD **)a1;
  do
  {
    if ( (unsigned __int8)operator==(&v14[6 * v13], a2) )
    {
      v14[6 * v15 + 5] = *a3;
      return v7;
    }
    if ( !v16 && (unsigned __int8)operator==(v9, v4) )
    {
      v8 = v15;
      v16 = 1;
    }
    v13 = (unsigned int)(v15 + 1);
  }
  while ( (unsigned int)v13 < v12 );
  if ( v16 )
  {
LABEL_28:
    v23 = *(_QWORD **)a1;
    v24 = 6LL * v8;
    *(_OWORD *)&v23[v24] = *(_OWORD *)a2;
    *(_OWORD *)&v23[v24 + 2] = *(_OWORD *)(a2 + 16);
    v23[v24 + 4] = *(_QWORD *)(a2 + 32);
    *(_QWORD *)(*(_QWORD *)a1 + 8 * v24 + 40) = *a3;
    ++*(_DWORD *)(a1 + 12);
    return 0;
  }
LABEL_16:
  if ( *(_DWORD *)(a1 + 12) == v12 )
  {
    v17 = *(_QWORD **)a1;
    v18 = 2 * v12;
    v8 = v12;
    v19 = operator new[](saturated_mul(2 * v12, 0x30uLL));
    *(_QWORD *)a1 = v19;
    if ( !v19 )
    {
      v10 = 14;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_5;
      McTemplateU0qqq(0LL, &MinInput_Warning_CheckResult, 0, 387, 14);
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_5;
      v11 = 185;
      goto LABEL_4;
    }
    memcpy_0(v19, v17, 48LL * *(unsigned int *)(a1 + 8));
    if ( *(_DWORD *)(a1 + 8) < v18 )
    {
      v20 = 6LL * *(unsigned int *)(a1 + 8);
      v21 = v18 - *(_DWORD *)(a1 + 8);
      do
      {
        v22 = *(_QWORD **)a1;
        *(_OWORD *)&v22[v20] = *(_OWORD *)v4;
        v20 += 6LL;
        *(_OWORD *)&v22[v20 - 4] = *(_OWORD *)(v4 + 16);
        v22[v20 - 2] = *(_QWORD *)(v4 + 32);
        --v21;
      }
      while ( v21 );
    }
    *(_DWORD *)(a1 + 8) = v18;
    operator delete(v17);
    goto LABEL_28;
  }
  v7 = -2147467259;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(v9, &MinInput_Warning_CheckResult, 0, 180, 5);
  return v7;
}
