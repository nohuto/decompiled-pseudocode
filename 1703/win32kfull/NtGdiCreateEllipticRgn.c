/*
 * XREFs of NtGdiCreateEllipticRgn @ 0x1C027DD60
 * Callers:
 *     <none>
 * Callees:
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C007E9CC (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ??0EBOX@@QEAA@AEAVERECTL@@H@Z @ 0x1C011D458 (--0EBOX@@QEAA@AEAVERECTL@@H@Z.c)
 *     ?bEllipse@@YAHAEAVEPATHOBJ@@AEAVEBOX@@@Z @ 0x1C028F2D0 (-bEllipse@@YAHAEAVEPATHOBJ@@AEAVEBOX@@@Z.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateEllipticRgn(unsigned int a1, unsigned int a2, int a3, int a4)
{
  struct HOBJ__ *v8; // rbx
  ULONG v9; // ecx
  struct HOBJ__ *v10; // rdi
  unsigned __int64 v12; // [rsp+28h] [rbp-99h] BYREF
  int v13; // [rsp+30h] [rbp-91h]
  int v14; // [rsp+34h] [rbp-8Dh]
  _QWORD v15[16]; // [rsp+38h] [rbp-89h] BYREF
  _DWORD v16[20]; // [rsp+B8h] [rbp-9h] BYREF

  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v15);
  v8 = 0LL;
  if ( !v15[1] )
  {
    v9 = 8;
LABEL_21:
    EngSetLastError(v9);
    goto LABEL_22;
  }
  v12 = __PAIR64__(a2, a1);
  v13 = a3;
  v14 = a4;
  if ( (a1 & 0xF8000000) != 0 && (a1 & 0xF8000000) != -134217728
    || (((a4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a2 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
  {
    v9 = 87;
    goto LABEL_21;
  }
  EBOX::EBOX((EBOX *)v16, (struct ERECTL *)&v12);
  if ( v16[0] )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v12);
    if ( v12 )
      goto LABEL_9;
    goto LABEL_11;
  }
  if ( (unsigned int)bEllipse((struct EPATHOBJ *)v15, (struct EBOX *)v16) && EPATHOBJ::bFlatten((EPATHOBJ *)v15) )
  {
    v13 = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v12, (struct EPATHOBJ *)v15, 1u, 0LL);
    if ( v12 )
    {
      RGNOBJ::vTighten((RGNOBJ *)&v12);
LABEL_9:
      v10 = RGNOBJ::hrgnAssociate((void **)&v12);
      if ( !v10 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v12);
      goto LABEL_12;
    }
LABEL_11:
    EngSetLastError(8u);
    v10 = 0LL;
LABEL_12:
    if ( v13 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v12);
    goto LABEL_19;
  }
  EngSetLastError(8u);
  v10 = 0LL;
LABEL_19:
  v8 = v10;
LABEL_22:
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v15);
  return v8;
}
