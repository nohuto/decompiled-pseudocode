/*
 * XREFs of ?GetIndexOfPrimaryPointer@PointerProcessor@@AEAAJPEAPEAUPointer@@KPEAK@Z @ 0x180071750
 * Callers:
 *     ?OnInputReport@PointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180070F70 (-OnInputReport@PointerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?FindNewPrimaryPointer@PointerProcessor@@AEAAJPEAPEAUPointer@@KPEAK@Z @ 0x1800716A4 (-FindNewPrimaryPointer@PointerProcessor@@AEAAJPEAPEAUPointer@@KPEAK@Z.c)
 */

__int64 __fastcall PointerProcessor::GetIndexOfPrimaryPointer(
        PointerProcessor *this,
        struct Pointer **a2,
        unsigned int a3,
        unsigned int *a4)
{
  int v4; // r11d
  char v5; // r10
  struct Pointer **v7; // rsi
  unsigned int v9; // ebx
  __int64 v10; // rcx
  PointerProcessor *v11; // rcx
  __int64 v12; // rdi
  int NewPrimaryPointer; // eax
  __int64 v14; // rcx
  struct Pointer *v15; // rcx
  PointerProcessor *v16; // rcx
  unsigned int v18; // [rsp+50h] [rbp+8h] BYREF

  v4 = *((_DWORD *)this + 16);
  v5 = 0;
  v7 = a2;
  if ( !a2 )
  {
    v9 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 127, 87);
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 0, 524, 87);
    }
    return v9;
  }
  v11 = 0LL;
  if ( a3 )
  {
    while ( v4 != *(_DWORD *)*a2 )
    {
      v11 = (PointerProcessor *)(unsigned int)((_DWORD)v11 + 1);
      ++a2;
      if ( (unsigned int)v11 >= a3 )
        goto LABEL_11;
    }
    v5 = 1;
  }
LABEL_11:
  v12 = 0LL;
  if ( v5 )
    v12 = (unsigned int)v11;
  v18 = v12;
  v9 = 0;
  if ( v5 )
  {
    v16 = v7[v12];
    if ( (*((_BYTE *)v16 + 4) & 2) != 0 )
      goto LABEL_23;
    v18 = 0;
    if ( (int)PointerProcessor::FindNewPrimaryPointer(v16, v7, a3, &v18) < 0 )
      goto LABEL_23;
    v15 = v7[v18];
    if ( (*((_BYTE *)v15 + 4) & 2) == 0 )
      goto LABEL_23;
    LODWORD(v12) = v18;
LABEL_22:
    *((_DWORD *)this + 16) = *(_DWORD *)v15;
LABEL_23:
    *a4 = v12;
    return v9;
  }
  NewPrimaryPointer = PointerProcessor::FindNewPrimaryPointer(v11, v7, a3, &v18);
  v9 = NewPrimaryPointer;
  if ( NewPrimaryPointer >= 0 )
  {
    LODWORD(v12) = v18;
    v15 = v7[v18];
    goto LABEL_22;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(v14, &MinInput_Warning_CheckResult, 0, 531, NewPrimaryPointer);
  return v9;
}
