/*
 * XREFs of ?SetValueForKey@?$DynamicSizeMap@UMobilePointerMapping@@UCursorId@@$00@@QEAAJAEBUMobilePointerMapping@@AEBUCursorId@@@Z @ 0x1800261D4
 * Callers:
 *     ?CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@PEAUIInputDisplay@@KPEAPEAUICursor@@@Z @ 0x180025900 (-CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@PEAUIInputDisplay@@KPEAPEAUICursor@@@Z.c)
 *     ?CreateCursor@MobileCursorBroker@@UEAAJPEAUDeviceInfo@@PEAUIInputDisplay@@KPEAPEAUICursor@@@Z @ 0x18002F6C0 (-CreateCursor@MobileCursorBroker@@UEAAJPEAUDeviceInfo@@PEAUIInputDisplay@@KPEAPEAUICursor@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800CC377 (memcpy_0.c)
 */

__int64 __fastcall DynamicSizeMap<MobilePointerMapping,CursorId,1>::SetValueForKey(__int64 a1, int *a2, _OWORD *a3)
{
  int v3; // esi
  unsigned int v4; // edi
  int v5; // r11d
  unsigned int v6; // r15d
  char v7; // r10
  char v11; // di
  int v12; // r9d
  __int64 v13; // rcx
  __int64 v14; // rdx
  _DWORD *v15; // r9
  _DWORD *v16; // rsi
  unsigned int v17; // edi
  void *v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx

  v3 = *a2;
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 16);
  v6 = 0;
  v7 = 0;
  if ( *a2 == v5 && a2[1] == *(_DWORD *)(a1 + 20) )
  {
    v11 = 87;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_6;
    v12 = 153;
LABEL_5:
    McTemplateU0qqq(a1, &MinInput_Warning_CheckResult, 0, v12, v11);
LABEL_6:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v13 = *(unsigned int *)(a1 + 8);
  v14 = 0LL;
  if ( !(_DWORD)v13 )
    goto LABEL_19;
  v15 = *(_DWORD **)a1;
  do
  {
    if ( v15[6 * v14] == v3 && v15[6 * v14 + 1] == a2[1] )
    {
      *(_OWORD *)&v15[6 * v14 + 2] = *a3;
      return v4;
    }
    if ( !v7 && v15[6 * v14] == v5 && v15[6 * v14 + 1] == *(_DWORD *)(a1 + 20) )
    {
      v6 = v14;
      v7 = 1;
    }
    v14 = (unsigned int)(v14 + 1);
  }
  while ( (unsigned int)v14 < (unsigned int)v13 );
  if ( v7 )
  {
LABEL_31:
    v21 = 3LL * v6;
    *(_QWORD *)(*(_QWORD *)a1 + 8 * v21) = *(_QWORD *)a2;
    *(_OWORD *)(*(_QWORD *)a1 + 8 * v21 + 8) = *a3;
    ++*(_DWORD *)(a1 + 12);
    return 0;
  }
LABEL_19:
  if ( *(_DWORD *)(a1 + 12) == (_DWORD)v13 )
  {
    v16 = *(_DWORD **)a1;
    v17 = 2 * v13;
    v6 = v13;
    v18 = operator new[](saturated_mul((unsigned int)(2 * v13), 0x18uLL));
    *(_QWORD *)a1 = v18;
    if ( !v18 )
    {
      v11 = 14;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_6;
      McTemplateU0qqq(0LL, &MinInput_Warning_CheckResult, 0, 387, 14);
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_6;
      v12 = 185;
      goto LABEL_5;
    }
    memcpy_0(v18, v16, 24LL * *(unsigned int *)(a1 + 8));
    if ( *(_DWORD *)(a1 + 8) < v17 )
    {
      v19 = 24LL * *(unsigned int *)(a1 + 8);
      v20 = v17 - *(_DWORD *)(a1 + 8);
      do
      {
        *(_QWORD *)(v19 + *(_QWORD *)a1) = *(_QWORD *)(a1 + 16);
        v19 += 24LL;
        --v20;
      }
      while ( v20 );
    }
    *(_DWORD *)(a1 + 8) = v17;
    operator delete(v16);
    goto LABEL_31;
  }
  v4 = -2147467259;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(v13, &MinInput_Warning_CheckResult, 0, 180, 5);
  return v4;
}
