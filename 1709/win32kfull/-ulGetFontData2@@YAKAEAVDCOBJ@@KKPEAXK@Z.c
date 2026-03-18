/*
 * XREFs of ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C00F5BF4
 * Callers:
 *     ulGetFontData @ 0x1C00F5B7C (ulGetFontData.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0030F20 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z @ 0x1C0038B08 (-QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z.c)
 */

__int64 __fastcall ulGetFontData2(
        struct DCOBJ *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 *a4,
        unsigned int a5)
{
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _FD_XFORM *v11; // rbx
  __int64 *v12; // rax
  __int64 v13; // rdx
  unsigned int TrueTypeTable; // ebx
  struct _FD_XFORM *v16; // [rsp+50h] [rbp-28h] BYREF
  _QWORD v17[3]; // [rsp+58h] [rbp-20h] BYREF

  v16 = 0LL;
  v8 = RFONTOBJ::bInit(&v16, a1, 0, 2u);
  v11 = v16;
  if ( v8 )
    GreAcquireSemaphore(*(_QWORD *)&v16[33].eXX);
  if ( !v11 )
    goto LABEL_8;
  v12 = *(__int64 **)&v11[7].eXX;
  if ( !v12 || (v13 = *v12, (v17[0] = v13) == 0LL) )
  {
    EngSetLastError(6u);
LABEL_8:
    TrueTypeTable = -1;
    goto LABEL_7;
  }
  TrueTypeTable = PFFOBJ::QueryTrueTypeTable(
                    (PFFOBJ *)v17,
                    *(_QWORD *)(v13 + 80),
                    *((_DWORD *)v12 + 2),
                    a2,
                    a3,
                    a5,
                    a4,
                    0LL,
                    0LL);
LABEL_7:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v16, v9, v10);
  return TrueTypeTable;
}
