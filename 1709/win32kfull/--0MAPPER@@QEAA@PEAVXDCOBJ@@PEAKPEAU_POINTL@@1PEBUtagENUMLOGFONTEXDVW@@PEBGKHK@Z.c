/*
 * XREFs of ??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z @ 0x1C00ADF80
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C00AEB2C (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?bUseMetaPtoD@DC@@QEAAHXZ @ 0x1C0027C40 (-bUseMetaPtoD@DC@@QEAAHXZ.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00AA600 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?bGetFaceName@MAPPER@@AEAAHXZ @ 0x1C00ADE18 (-bGetFaceName@MAPPER@@AEAAHXZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
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
  unsigned int v14; // ebp
  const unsigned __int16 *v15; // rdx
  const unsigned __int16 *v16; // rsi
  unsigned __int16 i; // ax
  size_t v18; // rbx
  __int64 v19; // r9
  __int64 v20; // r8
  unsigned __int16 *v21; // rax
  unsigned __int16 v22; // cx
  unsigned __int16 v23; // cx
  unsigned __int16 v24; // r8
  int v25; // edx
  int v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  char v31; // cl
  DC **v32; // r10
  __int64 v33; // rax
  char v34; // r14
  __int64 v35; // rdx
  int v36; // ecx
  int v37; // eax
  __int16 *v38; // rax
  __int16 v39; // cx
  int v40; // eax
  int v41; // ebx
  int v42; // esi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v48; // rcx
  __int64 v49; // rbp
  __int64 CurrentProcessWin32Process; // rax
  int v51; // ebp
  __int64 v52; // rcx
  int v53; // eax
  struct _KTHREAD *v54; // rsi
  __int64 *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rsi
  __int64 v58; // rax
  const struct tagENUMLOGFONTEXDVW *v59; // rax
  unsigned int v60; // eax
  int v61; // edx
  bool v62; // cf
  const struct tagENUMLOGFONTEXDVW *v63; // rax
  int v64; // ecx
  int v65; // edx
  int v66; // ecx
  int v67; // eax
  int v68; // ecx

  v10 = a6;
  v14 = 0;
  *(_QWORD *)this = a2;
  v15 = Src;
  *((_DWORD *)this + 63) = 0;
  v16 = v15;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 1) = v10;
  *((_QWORD *)this + 2) = v15;
  *((_DWORD *)this + 22) = 0;
  for ( i = *v15; i; ++v16 )
  {
    if ( i == 95 && (unsigned __int16)(v16[1] - 48) <= 9u )
      break;
    i = v16[1];
  }
  v18 = 2LL * (unsigned int)(v16 - v15);
  memmove((char *)this + 24, v15, v18);
  v20 = 0LL;
  *(_WORD *)((char *)this + v18 + 24) = 0;
  if ( *v16 == 95 )
  {
    v21 = (unsigned __int16 *)(v16 + 1);
    if ( (unsigned __int16)(v16[1] - 48) <= 9u )
    {
      v22 = *v21;
      if ( *v21 )
      {
        do
        {
          if ( (unsigned __int16)(v22 - 48) <= 9u )
          {
            v23 = *v21;
            if ( !*v21 )
              break;
            v24 = v21[1];
            ++v21;
            v25 = v23 - 48;
            if ( v24 )
            {
              do
              {
                if ( (unsigned __int16)(v24 - 48) > 9u )
                  break;
                ++v21;
                v26 = v24;
                v24 = *v21;
                v25 = v26 + 2 * (5 * v25 - 24);
              }
              while ( *v21 );
            }
            v27 = v14++;
            *((_DWORD *)this + v27 + 25) = v25;
          }
          else
          {
            ++v21;
          }
          v22 = *v21;
        }
        while ( *v21 );
        v20 = 0LL;
      }
    }
  }
  *((_DWORD *)this + 24) = v14;
  *((_DWORD *)this + 23) = 134248036;
  *((_QWORD *)this + 36) = 0LL;
  if ( v14 )
  {
    *((_DWORD *)this + 22) |= 1u;
  }
  else
  {
    v28 = *((_QWORD *)this + 1);
    v29 = *(unsigned int *)(v28 + 352);
    if ( (_DWORD)v29 )
    {
      memmove((char *)this + 92, (const void *)(v28 + 348), 4 * v29 + 8);
      v20 = 0LL;
    }
    else
    {
      *((_WORD *)this + 12) = 0;
    }
  }
  *((_DWORD *)this + 70) = a9;
  v30 = *((_QWORD *)this + 1);
  *((_DWORD *)this + 45) = -2;
  v31 = *(_BYTE *)(v30 + 23);
  *((_QWORD *)this + 29) = a5;
  *((_BYTE *)this + 284) = v31;
  *a5 = 0;
  *((_QWORD *)this + 28) = a4;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = -1;
  *((_QWORD *)this + 27) = a3;
  *a3 = 0;
  **((_DWORD **)this + 28) = 1;
  *(_DWORD *)(*((_QWORD *)this + 28) + 4LL) = 1;
  v32 = *(DC ***)this;
  *((_DWORD *)this + 63) |= ~(*(_DWORD *)(*(_QWORD *)(**(_QWORD **)this + 48LL) + 32LL) << 11) & 0x40000;
  v33 = *((_QWORD *)*v32 + 10);
  if ( *(_DWORD *)(v33 + 68) == 1 && ((*(_DWORD *)(v33 + 352) & 2) != 0 || !(unsigned int)DC::bUseMetaPtoD(*v32)) )
  {
    *((_DWORD *)this + 63) |= 0x1000u;
    v34 = a10;
  }
  else
  {
    v34 = -65;
  }
  v35 = *((_QWORD *)this + 1);
  if ( *(_BYTE *)(v35 + 26) == 2 )
  {
    v36 = *((_DWORD *)*v32 + 134);
    if ( (v36 & 1) == 0 || (v36 & 2) != 0 )
      *((_DWORD *)this + 63) |= 0x8000u;
  }
  v37 = *(_DWORD *)(v35 + 16);
  if ( v37 == 400 || v37 == 700 )
    *((_DWORD *)this + 63) |= 0x10000000u;
  v38 = (__int16 *)*((_QWORD *)this + 2);
  v39 = *v38;
  if ( *v38 == 77 )
  {
    if ( v38[1] == 83
      && v38[2] == 32
      && v38[3] == 83
      && v38[4] == 72
      && v38[5] == 69
      && v38[6] == 76
      && v38[7] == 76
      && v38[8] == 32
      && v38[9] == 68
      && v38[10] == 76
      && v38[11] == 71
      && !v38[12] )
    {
      *((_DWORD *)this + 63) |= 0x8000000u;
      goto LABEL_75;
    }
    goto LABEL_66;
  }
  if ( v39 != 83 )
  {
    if ( v39 == 84
      && v38[1] == 77
      && v38[2] == 83
      && v38[3] == 32
      && v38[4] == 82
      && v38[5] == 77
      && v38[6] == 78
      && !v38[7] )
    {
      *((_DWORD *)this + 63) |= 0x800000u;
      goto LABEL_75;
    }
    goto LABEL_66;
  }
  if ( v38[1] != 89 || v38[2] != 83 || v38[3] != 84 || v38[4] != 69 || v38[5] != 77 || v38[6] )
  {
LABEL_66:
    if ( v39 == 83 )
    {
      if ( v38[1] == 89 && v38[2] == 77 && v38[3] == 66 && v38[4] == 79 && v38[5] == 76 )
        *((_DWORD *)this + 63) |= 0x4000000u;
    }
    else if ( v39 == 64 )
    {
      *((_DWORD *)this + 63) |= 0x2000000u;
    }
    goto LABEL_75;
  }
  *((_DWORD *)this + 63) |= 0x2000u;
  if ( (*(_BYTE *)(v35 + 27) & 0xF) == 1 )
    *((_QWORD *)this + 2) = L"FIXEDSYS";
LABEL_75:
  *((_DWORD *)this + 41) = *(_DWORD *)v35;
  v40 = *(_DWORD *)(v35 + 4);
  if ( v40 < 0 )
    v40 = -v40;
  *((_DWORD *)this + 42) = v40;
  LOBYTE(v41) = 18;
  LOBYTE(v42) = 18;
  a6 = (const struct tagENUMLOGFONTEXDVW *)*((_QWORD *)*v32 + 6);
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(a6, v35, v20, v19) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v49 = *ThreadWin32Thread;
      if ( *ThreadWin32Thread )
      {
        if ( *(_QWORD *)(v49 + 352) )
          CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
        if ( *(_DWORD *)(v49 + 340) )
        {
          LOBYTE(v42) = *(_DWORD *)(v49 + 340);
        }
        else
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v48);
          if ( CurrentProcessWin32Process )
            v42 = *(_DWORD *)(CurrentProcessWin32Process + 280);
        }
      }
    }
  }
  v51 = 96;
  v52 = *(unsigned int *)&a6->elfEnumLogfontEx.elfLogFont.lfFaceName[2];
  if ( (v52 & 1) != 0 && (v42 & 0xFu) - 1 > 1 )
    v53 = 96;
  else
    v53 = *(_DWORD *)a6[5].elfEnumLogfontEx.elfFullName;
  *((_DWORD *)this + 61) = v53;
  v54 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v52, v44, v45, v46) )
  {
    v55 = (__int64 *)PsGetThreadWin32Thread(v54);
    if ( v55 )
    {
      v57 = *v55;
      if ( *v55 )
      {
        if ( *(_QWORD *)(v57 + 352) )
          CaptureAndValidateUserModeDpiAwarenessContext(*v55);
        if ( *(_DWORD *)(v57 + 340) )
        {
          LOBYTE(v41) = *(_DWORD *)(v57 + 340);
        }
        else
        {
          v58 = PsGetCurrentProcessWin32Process(v56);
          if ( v58 )
            v41 = *(_DWORD *)(v58 + 280);
        }
      }
    }
  }
  v59 = a6;
  if ( (*(_DWORD *)&a6->elfEnumLogfontEx.elfLogFont.lfFaceName[2] & 1) == 0 || (v41 & 0xFu) - 1 <= 1 )
    v51 = *(_DWORD *)&a6[5].elfEnumLogfontEx.elfFullName[2];
  *((_DWORD *)this + 62) = v51;
  *((_DWORD *)this + 63) |= (*(_DWORD *)&v59[5].elfEnumLogfontEx.elfFullName[4] >> 5) & 0x100;
  *((_DWORD *)this + 63) |= (*(_DWORD *)&v59[5].elfEnumLogfontEx.elfFullName[4] & 8) << 7;
  v60 = PDEVOBJ::cFonts((PDEVOBJ *)&a6);
  v61 = 0x10000;
  v62 = v60 != 0;
  v63 = a6;
  *((_DWORD *)this + 63) |= v62 ? 0x200 : 0;
  v64 = 0x20000000;
  if ( *(_DWORD *)&v63[5].elfEnumLogfontEx.elfLogFont.lfFaceName[14] )
    v61 = 0;
  v65 = *((_DWORD *)this + 63) | v61;
  *((_DWORD *)this + 63) = v65;
  if ( *(_DWORD *)&v63[5].elfEnumLogfontEx.elfLogFont.lfFaceName[14] != 4 )
    v64 = 0;
  *((_DWORD *)this + 63) = v65 | v64;
  if ( !*((_DWORD *)this + 41) )
  {
    v66 = *(_DWORD *)&v63[4].elfEnumLogfontEx.elfFullName[36];
    *((_DWORD *)this + 63) |= 8u;
    *((_DWORD *)this + 41) = v66;
  }
  v67 = *((_DWORD *)this + 41);
  if ( v67 < 0 )
  {
    *((_DWORD *)this + 63) |= 2u;
    *((_DWORD *)this + 41) = -v67;
  }
  v68 = *(_DWORD *)(*((_QWORD *)this + 1) + 16LL);
  *((_DWORD *)this + 43) = v68;
  if ( !v68 )
  {
    *((_DWORD *)this + 63) |= 0x200000u;
    *((_DWORD *)this + 43) = 400;
  }
  if ( !**((_WORD **)this + 2) )
    MAPPER::bGetFaceName(this);
  *((_DWORD *)this + 63) |= v34 & 0x40 | 1;
  return this;
}
