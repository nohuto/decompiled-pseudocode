/*
 * XREFs of ?vGrowPathAndAddPoint@WIDEPATHOBJ@@IEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C02A7388
 * Callers:
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C00E5C80 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C00E5CE0 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 * Callees:
 *     ?bGrowPath@WIDEPATHOBJ@@IEAAHXZ @ 0x1C00E5A34 (-bGrowPath@WIDEPATHOBJ@@IEAAHXZ.c)
 *     ?bValid@WIDEPATHOBJ@@QEAAHXZ @ 0x1C00E5C64 (-bValid@WIDEPATHOBJ@@QEAAHXZ.c)
 */

void __fastcall WIDEPATHOBJ::vGrowPathAndAddPoint(
        WIDEPATHOBJ *this,
        struct _POINTFIX *a2,
        struct EVECTORFX *a3,
        int a4)
{
  WIDEPATHOBJ *v8; // rcx
  _DWORD *v9; // rcx
  int v10; // eax

  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 40LL) + 20LL) = (*((_QWORD *)this + 17)
                                                                 - *(_QWORD *)(*((_QWORD *)this + 1) + 40LL)
                                                                 - 24LL) >> 3;
  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 8LL) = *(_QWORD *)(*((_QWORD *)this + 1) + 40LL)
                                                               + 8
                                                               * (*(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 1)
                                                                                              + 40LL)
                                                                                  + 20LL)
                                                                + 3LL);
  if ( WIDEPATHOBJ::bValid(this) )
  {
    if ( (unsigned int)WIDEPATHOBJ::bGrowPath(v8) )
    {
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 40LL) + 16LL) = 0;
      **((struct _POINTFIX **)this + 17) = *a2;
      if ( a3 )
      {
        v9 = (_DWORD *)*((_QWORD *)this + 17);
        v10 = *(_DWORD *)a3;
        if ( a4 )
        {
          *v9 -= v10;
          *(_DWORD *)(*((_QWORD *)this + 17) + 4LL) -= *((_DWORD *)a3 + 1);
        }
        else
        {
          *v9 += v10;
          *(_DWORD *)(*((_QWORD *)this + 17) + 4LL) += *((_DWORD *)a3 + 1);
        }
      }
      *((_QWORD *)this + 17) += 8LL;
    }
    else
    {
      *((_DWORD *)this + 32) = 1;
    }
  }
}
