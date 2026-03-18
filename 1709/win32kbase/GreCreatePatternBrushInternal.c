/*
 * XREFs of GreCreatePatternBrushInternal @ 0x1C001B3E0
 * Callers:
 *     GreCreatePatternBrush @ 0x1C009C0F0 (GreCreatePatternBrush.c)
 *     bInitBRUSHOBJ @ 0x1C01DF6B8 (bInitBRUSHOBJ.c)
 * Callees:
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C001B254 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C001E214 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C001E430 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C003FE40 (HmgDecrementShareReferenceCountEx.c)
 *     ?bIsMonochrome@XEPALOBJ@@QEAAHXZ @ 0x1C00413D4 (-bIsMonochrome@XEPALOBJ@@QEAAHXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0042C1C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     HmgShareLockCheck @ 0x1C004D5B0 (HmgShareLockCheck.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngSetLastError @ 0x1C008AC50 (EngSetLastError.c)
 */

__int64 __fastcall GreCreatePatternBrushInternal(struct HOBJ__ *a1, int a2, int a3)
{
  __int64 v6; // rdi
  struct SURFACE *v7; // rax
  struct SURFACE *v8; // rbx
  int v9; // r8d
  int v10; // edx
  int IsMonochrome; // eax
  HBITMAP v12; // rdx
  ULONG v14; // ecx
  _QWORD v15[2]; // [rsp+40h] [rbp-38h] BYREF
  int v16; // [rsp+50h] [rbp-28h]
  __int64 v17; // [rsp+98h] [rbp+20h] BYREF

  v6 = 0LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v17);
  v7 = (struct SURFACE *)HmgShareLockCheck(a1);
  v8 = v7;
  if ( !v7 )
  {
    v14 = 6;
    goto LABEL_17;
  }
  if ( (*((_DWORD *)v7 + 28) & 0x4000000) == 0 )
  {
    v14 = 87;
LABEL_17:
    EngSetLastError(v14);
    goto LABEL_9;
  }
  if ( a3 )
  {
    v10 = 8;
    v9 = 8;
  }
  else
  {
    v9 = 0;
    v10 = 0;
  }
  if ( hbmCreateClone(v7, v10, v9) )
  {
    v17 = *((_QWORD *)v8 + 16);
    IsMonochrome = XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v17);
    BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v15, v12, (HBITMAP)a1, IsMonochrome, 0, 0x40u, a2);
    if ( v15[0] )
    {
      v6 = *(_QWORD *)v15[0];
      v16 = 1;
    }
    BRUSHMEMOBJ::~BRUSHMEMOBJ((BRUSHMEMOBJ *)v15);
  }
LABEL_9:
  if ( v8 )
    HmgDecrementShareReferenceCountEx(v8);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
  return v6;
}
