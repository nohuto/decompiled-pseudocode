/*
 * XREFs of NtGdiCreateRoundRectRgn @ 0x1C011CEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C007E9CC (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1C011D00C (-bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z.c)
 *     ??0EBOX@@QEAA@AEAVERECTL@@H@Z @ 0x1C011D458 (--0EBOX@@QEAA@AEAVERECTL@@H@Z.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateRoundRectRgn(unsigned int a1, unsigned int a2, int a3, int a4, int a5, int a6)
{
  int v10; // r8d
  struct HOBJ__ *v11; // rbx
  ULONG v12; // ecx
  struct HOBJ__ *v14; // rdi
  unsigned __int64 v15; // [rsp+28h] [rbp-A9h] BYREF
  int v16; // [rsp+30h] [rbp-A1h]
  int v17; // [rsp+34h] [rbp-9Dh]
  _QWORD v18[16]; // [rsp+38h] [rbp-99h] BYREF
  _DWORD v19[20]; // [rsp+B8h] [rbp-19h] BYREF

  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v18);
  v11 = 0LL;
  if ( v18[1] )
  {
    v15 = __PAIR64__(a2, a1);
    v16 = a3;
    v17 = a4;
    if ( ((a1 & 0xF8000000) == 0 || (a1 & 0xF8000000) == -134217728)
      && (((a4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && (((a2 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
    {
      EBOX::EBOX((EBOX *)v19, (struct ERECTL *)&v15, v10);
      if ( v19[0] )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v15);
        if ( v15 )
        {
LABEL_14:
          v14 = RGNOBJ::hrgnAssociate((void **)&v15);
          if ( !v14 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v15);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !(unsigned int)bRoundRect((struct EPATHOBJ *)v18, (struct EBOX *)v19, a5, a6)
          || !EPATHOBJ::bFlatten((EPATHOBJ *)v18) )
        {
          EngSetLastError(8u);
          v14 = 0LL;
LABEL_18:
          v11 = v14;
          goto LABEL_5;
        }
        v16 = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v15, (struct EPATHOBJ *)v18, 1u, 0LL);
        if ( v15 )
        {
          RGNOBJ::vTighten((RGNOBJ *)&v15);
          goto LABEL_14;
        }
      }
      EngSetLastError(8u);
      v14 = 0LL;
LABEL_16:
      if ( v16 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v15);
      goto LABEL_18;
    }
    v12 = 87;
  }
  else
  {
    v12 = 8;
  }
  EngSetLastError(v12);
LABEL_5:
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v18);
  return v11;
}
