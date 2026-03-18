/*
 * XREFs of ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0029CB4
 * Callers:
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C00294BC (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 * Callees:
 *     IsAnyCharsetDbcs @ 0x1C0029C5C (IsAnyCharsetDbcs.c)
 *     ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x1C002A0E4 (-bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z.c)
 *     cCapString @ 0x1C002CDA8 (cCapString.c)
 *     ?lfOrientation@IFIOBJ@@QEAAJXZ @ 0x1C002FB3C (-lfOrientation@IFIOBJ@@QEAAJXZ.c)
 *     ?dpNtmi@PFEOBJ@@QEAAKXZ @ 0x1C002FBA4 (-dpNtmi@PFEOBJ@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall PFEMEMOBJ::bInit(
        PFEMEMOBJ *this,
        struct PFF *a2,
        int a3,
        struct _FD_GLYPHSET *a4,
        unsigned __int64 a5,
        struct _IFIMETRICS *a6,
        unsigned __int64 a7,
        int a8,
        struct _UNIVERSAL_FONT_ID *a9,
        int a10)
{
  unsigned int v10; // esi
  __int64 v13; // r15
  __int64 v14; // r8
  __int64 v15; // rax
  const wchar_t *v16; // rbx
  int v17; // eax
  __int64 v18; // r15
  unsigned int v19; // ecx
  int v20; // eax
  int v21; // ebx
  char *v22; // r14
  char *v23; // rbx
  __int16 v24; // dx
  _BYTE *v25; // r9
  _WORD *v26; // rax
  __int16 v28; // cx
  __int64 v29; // rax
  int v30; // ecx
  int *v32; // [rsp+30h] [rbp-91h]
  __int64 v33; // [rsp+38h] [rbp-89h] BYREF
  _BYTE v34[32]; // [rsp+48h] [rbp-79h] BYREF
  _WORD v35[32]; // [rsp+68h] [rbp-59h] BYREF
  char v36; // [rsp+A9h] [rbp-18h] BYREF

  v10 = 0;
  if ( a6->fwdWinAscender + a6->fwdWinDescender == 0 || a6->fwdUnitsPerEm == 0 )
    return 0LL;
  **(_QWORD **)this = a2;
  *(_DWORD *)(*(_QWORD *)this + 8LL) = a3;
  *(_QWORD *)(*(_QWORD *)this + 16LL) = a4;
  *(_QWORD *)(*(_QWORD *)this + 24LL) = a5;
  *(_QWORD *)(*(_QWORD *)this + 32LL) = a6;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = a7;
  *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 56LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 64LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 12LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 100LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 104LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 140LL) = 0;
  v13 = *(_QWORD *)(*(_QWORD *)this + 32LL);
  v33 = v13;
  if ( (unsigned int)IsAnyCharsetDbcs(v13) )
    *(_DWORD *)(v14 + 12) |= 0x80u;
  v32 = (int *)(v13 + 8);
  if ( *(_WORD *)(*(int *)(v13 + 8) + v13) == 64 )
    *(_DWORD *)(*(_QWORD *)this + 12LL) |= 0x100u;
  *(_DWORD *)(*(_QWORD *)this + 72LL) = (PFEOBJ::dpNtmi(this) + 119) & 0xFFFFFFFC;
  if ( (a6->flInfo & 0x4000) != 0 && a6->cjIfiExtra > 0x10 )
    *(_DWORD *)(*(_QWORD *)this + 72LL) += 40 * *(ULONG *)((char *)&a6->cjIfiExtra + a6[1].dpwszFaceName);
  if ( a8 )
  {
    *(_DWORD *)(*(_QWORD *)this + 12LL) |= 1u;
  }
  else
  {
    v15 = *((_QWORD *)a2 + 19);
    if ( v15 && !*(_QWORD *)(*(_QWORD *)v15 + 80LL) )
    {
      v29 = *(_QWORD *)this;
      if ( (*((_DWORD *)a2 + 13) & 0x10) != 0 )
        *(_DWORD *)(v29 + 12) |= 0x40u;
      else
        *(_DWORD *)(v29 + 12) |= 4u;
      *(_DWORD *)(*(_QWORD *)this + 100LL) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
      v13 = v33;
      *(_QWORD *)(*(_QWORD *)this + 104LL) = KeGetCurrentThread();
    }
  }
  if ( a9 )
    *(_DWORD *)(*(_QWORD *)this + 12LL) |= 0x20u;
  if ( a10 )
    *(_DWORD *)(*(_QWORD *)this + 12LL) |= 8u;
  v16 = (const wchar_t *)(v13 + *(int *)(v13 + 16));
  if ( *v16 == 64 )
    ++v16;
  if ( !_wcsicmp(v16, L"SYSTEM")
    || !_wcsicmp(v16, L"FIXEDSYS")
    || !_wcsicmp(v16, L"TERMINAL")
    || !_wcsicmp(v16, L"SMALL FONTS") && *(_BYTE *)(v13 + 44) == 0x80 )
  {
    *(_DWORD *)(*(_QWORD *)this + 12LL) |= 0x10u;
  }
  *(_QWORD *)(*(_QWORD *)this + 120LL) = 0LL;
  *(_WORD *)(*(_QWORD *)this + 112LL) = 1;
  *(_WORD *)(*(_QWORD *)this + 114LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 88LL) = _InterlockedIncrement(&dword_1C0330420);
  v17 = IFIOBJ::lfOrientation((IFIOBJ *)&v33);
  v18 = v33;
  *(_DWORD *)(*(_QWORD *)this + 68LL) = v17;
  v19 = *(_DWORD *)(v18 + 4);
  if ( v19 < 4 )
    v20 = 0;
  else
    v20 = *(_DWORD *)(v18 + 192);
  if ( v20 )
  {
    if ( v19 < 4 )
      v30 = 0;
    else
      v30 = *(_DWORD *)(v18 + 192);
    *(_DWORD *)(*(_QWORD *)this + 96LL) = v30;
    *(_DWORD *)(*(_QWORD *)this + 92LL) = 1;
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)this + 92LL) = *((_DWORD *)a2 + 34);
    *(_DWORD *)(*(_QWORD *)this + 96LL) = a3;
    if ( a9 )
      *(_DWORD *)(*(_QWORD *)this + 96LL) += (*((_DWORD *)a9 + 1) - 1) & 0xFFFFFFFE;
  }
  memset(v34, 0, sizeof(v34));
  PushThreadGuardedObject(v34, *(_QWORD *)this, vDeletePFE);
  v21 = bComputeGISET(a6, *(struct PFE **)this, (struct _GISET **)(*(_QWORD *)this + 80LL));
  PopThreadGuardedObject(v34);
  if ( v21 )
  {
    *(_DWORD *)(*(_QWORD *)this + 136LL) = 0;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 40LL) )
    {
      v22 = (char *)gpfsTable;
      v23 = (char *)gpfsTable + 196 * gcfsTable;
      cCapString(v35, v18 + *v32, 32LL);
      if ( v22 < v23 )
      {
        v24 = v35[0];
        v25 = v22 + 195;
        do
        {
          if ( !(*v25 | *(v25 - 66)) )
          {
            v26 = v35;
            if ( v24 == *(_WORD *)(v25 - 65) )
            {
              v28 = v24;
              while ( v28 )
              {
                v28 = *++v26;
                if ( *v26 != *(_WORD *)((char *)v26 + v25 - &v36) )
                  goto LABEL_31;
              }
              *(_BYTE *)((unsigned int)(*(_DWORD *)(*(_QWORD *)this + 136LL))++ + *(_QWORD *)this + 144LL) = (char)((_BYTE)v25 - (_BYTE)gpfsTable + 61) / -60;
              v24 = v35[0];
            }
          }
LABEL_31:
          v25 += 196;
        }
        while ( v25 - 195 < v23 );
      }
    }
    return 1;
  }
  return v10;
}
