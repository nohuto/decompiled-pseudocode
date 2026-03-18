/*
 * XREFs of GreCreatePatternBrushInternal @ 0x1C00592C0
 * Callers:
 *     GreCreatePatternBrush @ 0x1C0092890 (GreCreatePatternBrush.c)
 *     bInitBRUSHOBJ @ 0x1C01D7DD0 (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     HmgShareLockCheck @ 0x1C0031F10 (HmgShareLockCheck.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0037A44 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0059600 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C00598A0 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ?bIsMonochrome@XEPALOBJ@@QEAAHXZ @ 0x1C005A384 (-bIsMonochrome@XEPALOBJ@@QEAAHXZ.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C005A440 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngSetLastError @ 0x1C0083400 (EngSetLastError.c)
 */

__int64 __fastcall GreCreatePatternBrushInternal(HBITMAP a1, int a2, int a3)
{
  __int64 v6; // rdi
  struct SURFACE *v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // r8d
  unsigned int v10; // edx
  int IsMonochrome; // eax
  HBITMAP v12; // rdx
  __int64 v13; // rcx
  ULONG v15; // ecx
  _QWORD v16[2]; // [rsp+40h] [rbp-38h] BYREF
  int v17; // [rsp+50h] [rbp-28h]
  __int64 v18; // [rsp+98h] [rbp+20h] BYREF

  v6 = 0LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v18);
  v7 = (struct SURFACE *)HmgShareLockCheck((unsigned int)a1, 5);
  v8 = (__int64)v7;
  if ( !v7 )
  {
    v15 = 6;
    goto LABEL_17;
  }
  if ( (*((_DWORD *)v7 + 28) & 0x4000000) == 0 )
  {
    v15 = 87;
LABEL_17:
    EngSetLastError(v15);
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
    v18 = *(_QWORD *)(v8 + 128);
    IsMonochrome = XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v18);
    BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v16, v12, a1, IsMonochrome, 0, 0x40u, a2);
    if ( v16[0] )
    {
      v6 = *(_QWORD *)v16[0];
      v17 = 1;
    }
    BRUSHMEMOBJ::~BRUSHMEMOBJ((BRUSHMEMOBJ *)v16);
  }
LABEL_9:
  if ( v8 )
    HmgDecrementShareReferenceCount(v8);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v13);
  }
  return v6;
}
