/*
 * XREFs of ??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z @ 0x1C0057CE0
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C00582F4 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0054B50 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?bGetFaceName@MAPPER@@AEAAHXZ @ 0x1C0057B78 (-bGetFaceName@MAPPER@@AEAAHXZ.c)
 *     ?bUseMetaPtoD@DC@@QEAAHXZ @ 0x1C007AE60 (-bUseMetaPtoD@DC@@QEAAHXZ.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

MAPPER *__fastcall MAPPER::MAPPER(
        MAPPER *this,
        struct XDCOBJ *a2,
        unsigned int *a3,
        struct _POINTL *a4,
        unsigned int *a5,
        const struct tagENUMLOGFONTEXDVW *a6,
        const unsigned __int16 *Src,
        unsigned int a8,
        int a9,
        char a10)
{
  const struct tagENUMLOGFONTEXDVW *v10; // rax
  int v11; // r15d
  const unsigned __int16 *v13; // rdx
  unsigned int v15; // ebp
  const unsigned __int16 *v16; // rsi
  unsigned __int16 i; // ax
  size_t v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  char v22; // cl
  unsigned int *v23; // rax
  DC **v24; // r10
  __int64 v25; // rax
  char v26; // bp
  __int64 v27; // rdx
  int v28; // eax
  __int16 *v29; // rcx
  __int16 v30; // ax
  int v31; // eax
  int v32; // esi
  int v33; // ebx
  __int64 *ThreadWin32Thread; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r14
  __int64 CurrentProcessWin32Process; // rax
  int y; // r14d
  int x; // eax
  __int64 *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rbx
  __int64 v45; // rax
  struct _POINTL *v46; // rax
  int v47; // eax
  int v48; // eax
  struct _POINTL *v49; // rax
  int v50; // ecx
  int v51; // ecx
  bool v52; // zf
  int v53; // eax
  int v54; // ecx
  LONG v56; // ecx
  unsigned __int16 v57; // ax
  unsigned __int16 *v58; // rsi
  unsigned __int16 j; // cx
  unsigned __int16 v60; // r8
  int v61; // edx
  int v62; // eax
  __int64 v63; // rax
  struct _POINTL *v64; // [rsp+68h] [rbp+20h] BYREF

  v64 = a4;
  v10 = a6;
  v11 = 0;
  *(_QWORD *)this = a2;
  v13 = Src;
  *((_DWORD *)this + 63) = 0;
  v15 = 0;
  *((_QWORD *)this + 32) = 0LL;
  v16 = v13;
  *((_QWORD *)this + 1) = v10;
  *((_QWORD *)this + 2) = v13;
  *((_DWORD *)this + 22) = 0;
  for ( i = *v13; i; ++v16 )
  {
    if ( i == 95 && (unsigned __int16)(v16[1] - 48) <= 9u )
      break;
    i = v16[1];
  }
  v18 = 2LL * (unsigned int)(v16 - v13);
  memmove((char *)this + 24, v13, v18);
  *(_WORD *)((char *)this + v18 + 24) = 0;
  if ( *v16 == 95 )
  {
    v57 = v16[1];
    v58 = (unsigned __int16 *)(v16 + 1);
    if ( (unsigned __int16)(v57 - 48) <= 9u )
    {
      for ( j = *v58; *v58; j = *v58 )
      {
        while ( (unsigned __int16)(j - 48) > 9u )
        {
          j = v58[1];
          ++v58;
          if ( !j )
            goto LABEL_5;
        }
        v60 = v58[1];
        ++v58;
        v61 = j - 48;
        if ( v60 )
        {
          do
          {
            if ( (unsigned __int16)(v60 - 48) > 9u )
              break;
            ++v58;
            v62 = v60;
            v60 = *v58;
            v61 = v62 + 2 * (5 * v61 - 24);
          }
          while ( *v58 );
        }
        v63 = v15++;
        *((_DWORD *)this + v63 + 25) = v61;
      }
    }
  }
LABEL_5:
  *((_DWORD *)this + 24) = v15;
  *((_DWORD *)this + 23) = 134248036;
  *((_QWORD *)this + 36) = 0LL;
  if ( v15 )
  {
    *((_DWORD *)this + 22) |= 1u;
  }
  else
  {
    v19 = *((_QWORD *)this + 1);
    v20 = *(unsigned int *)(v19 + 352);
    if ( (_DWORD)v20 )
      memmove((char *)this + 92, (const void *)(v19 + 348), 4 * v20 + 8);
    else
      *((_WORD *)this + 12) = 0;
  }
  *((_DWORD *)this + 70) = a9;
  v21 = *((_QWORD *)this + 1);
  *((_DWORD *)this + 45) = -2;
  v22 = *(_BYTE *)(v21 + 23);
  v23 = a5;
  *((_QWORD *)this + 29) = a5;
  *((_BYTE *)this + 284) = v22;
  *v23 = 0;
  *((_QWORD *)this + 28) = v64;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = -1;
  *((_QWORD *)this + 27) = a3;
  *a3 = 0;
  **((_DWORD **)this + 28) = 1;
  *(_DWORD *)(*((_QWORD *)this + 28) + 4LL) = 1;
  v24 = *(DC ***)this;
  *((_DWORD *)this + 63) |= ~(*(_DWORD *)(*(_QWORD *)(**(_QWORD **)this + 48LL) + 32LL) << 11) & 0x40000;
  v25 = *((_QWORD *)*v24 + 10);
  if ( *(_DWORD *)(v25 + 68) == 1 && ((*(_DWORD *)(v25 + 352) & 2) != 0 || !(unsigned int)DC::bUseMetaPtoD(*v24)) )
  {
    *((_DWORD *)this + 63) |= 0x1000u;
    v26 = a10;
  }
  else
  {
    v26 = a10 & 0xBF;
  }
  v27 = *((_QWORD *)this + 1);
  if ( *(_BYTE *)(v27 + 26) == 2 && (*((_DWORD *)*v24 + 134) & 3) != 1 )
    *((_DWORD *)this + 63) |= 0x8000u;
  v28 = *(_DWORD *)(v27 + 16);
  if ( v28 == 400 || v28 == 700 )
    *((_DWORD *)this + 63) |= 0x10000000u;
  v29 = (__int16 *)*((_QWORD *)this + 2);
  v30 = *v29;
  if ( *v29 == 77
    && v29[1] == 83
    && v29[2] == 32
    && v29[3] == 83
    && v29[4] == 72
    && v29[5] == 69
    && v29[6] == 76
    && v29[7] == 76
    && v29[8] == 32
    && v29[9] == 68
    && v29[10] == 76
    && v29[11] == 71
    && !v29[12] )
  {
    *((_DWORD *)this + 63) |= 0x8000000u;
  }
  else if ( v30 == 83 && v29[1] == 89 && v29[2] == 83 && v29[3] == 84 && v29[4] == 69 && v29[5] == 77 && !v29[6] )
  {
    *((_DWORD *)this + 63) |= 0x2000u;
    if ( (*(_BYTE *)(v27 + 27) & 0xF) == 1 )
      *((_QWORD *)this + 2) = L"FIXEDSYS";
  }
  else if ( v30 == 84
         && v29[1] == 77
         && v29[2] == 83
         && v29[3] == 32
         && v29[4] == 82
         && v29[5] == 77
         && v29[6] == 78
         && !v29[7] )
  {
    *((_DWORD *)this + 63) |= 0x800000u;
  }
  else if ( v30 == 83 && v29[1] == 89 && v29[2] == 77 && v29[3] == 66 && v29[4] == 79 && v29[5] == 76 )
  {
    *((_DWORD *)this + 63) |= 0x4000000u;
  }
  else if ( v30 == 64 )
  {
    *((_DWORD *)this + 63) |= 0x2000000u;
  }
  *((_DWORD *)this + 41) = *(_DWORD *)v27;
  v31 = *(_DWORD *)(v27 + 4);
  if ( v31 < 0 )
    v31 = -v31;
  *((_DWORD *)this + 42) = v31;
  LOBYTE(v32) = 18;
  LOBYTE(v33) = 18;
  v64 = (struct _POINTL *)*((_QWORD *)*v24 + 6);
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    v37 = *ThreadWin32Thread;
    if ( *ThreadWin32Thread )
    {
      if ( *(_QWORD *)(v37 + 352) )
        CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
      if ( *(_DWORD *)(v37 + 340) )
      {
        LOBYTE(v33) = *(_DWORD *)(v37 + 340);
      }
      else
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v36, v35);
        if ( CurrentProcessWin32Process )
          v33 = *(_DWORD *)(CurrentProcessWin32Process + 280);
      }
    }
  }
  y = 96;
  if ( (v64[4].x & 1) != 0 && (v33 & 0xFu) - 1 > 1 )
    x = 96;
  else
    x = v64[274].x;
  *((_DWORD *)this + 61) = x;
  v41 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v41 )
  {
    v44 = *v41;
    if ( *v41 )
    {
      if ( *(_QWORD *)(v44 + 352) )
        CaptureAndValidateUserModeDpiAwarenessContext(*v41);
      if ( *(_DWORD *)(v44 + 340) )
      {
        LOBYTE(v32) = *(_DWORD *)(v44 + 340);
      }
      else
      {
        v45 = PsGetCurrentProcessWin32Process(v43, v42);
        if ( v45 )
          v32 = *(_DWORD *)(v45 + 280);
      }
    }
  }
  v46 = v64;
  if ( (v64[4].x & 1) == 0 || (v32 & 0xFu) - 1 <= 1 )
    y = v64[274].y;
  *((_DWORD *)this + 62) = y;
  *((_DWORD *)this + 63) |= ((unsigned int)v46[275].x >> 5) & 0x100;
  if ( (v46[275].x & 8) != 0 )
    v47 = 1024;
  else
    v47 = 0;
  *((_DWORD *)this + 63) |= v47;
  if ( PDEVOBJ::cFonts((PDEVOBJ *)&v64) )
    v48 = 512;
  else
    v48 = 0;
  *((_DWORD *)this + 63) |= v48;
  v49 = v64;
  if ( v64[269].y )
    v50 = 0;
  else
    v50 = 0x10000;
  v51 = *((_DWORD *)this + 63) | v50;
  *((_DWORD *)this + 63) = v51;
  if ( v49[269].y == 4 )
    v11 = 0x20000000;
  v52 = *((_DWORD *)this + 41) == 0;
  *((_DWORD *)this + 63) = v11 | v51;
  if ( v52 )
  {
    v56 = v49[230].y;
    *((_DWORD *)this + 63) |= 8u;
    *((_DWORD *)this + 41) = v56;
  }
  v53 = *((_DWORD *)this + 41);
  if ( v53 < 0 )
  {
    *((_DWORD *)this + 63) |= 2u;
    *((_DWORD *)this + 41) = -v53;
  }
  v54 = *(_DWORD *)(*((_QWORD *)this + 1) + 16LL);
  *((_DWORD *)this + 43) = v54;
  if ( !v54 )
  {
    *((_DWORD *)this + 63) |= 0x200000u;
    *((_DWORD *)this + 43) = 400;
  }
  if ( !**((_WORD **)this + 2) )
    MAPPER::bGetFaceName(this);
  *((_DWORD *)this + 63) |= v26 & 0x40 | 1;
  return this;
}
