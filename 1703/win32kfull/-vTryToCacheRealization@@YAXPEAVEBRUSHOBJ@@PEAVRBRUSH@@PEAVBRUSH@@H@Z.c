/*
 * XREFs of ?vTryToCacheRealization@@YAXPEAVEBRUSHOBJ@@PEAVRBRUSH@@PEAVBRUSH@@H@Z @ 0x1C00AD404
 * Callers:
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C00AB680 (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C0247768 (-BRUSHOBJ_pvGetRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     BRUSHOBJ_pvGetRbrush @ 0x1C0247990 (BRUSHOBJ_pvGetRbrush.c)
 * Callees:
 *     <none>
 */

void __fastcall vTryToCacheRealization(struct EBRUSHOBJ *a1, struct RBRUSH *a2, struct BRUSH *a3, int a4)
{
  __int64 v8; // r14

  v8 = HmgPentryFromPobj(a3);
  if ( G_fConsole
    || (*(_DWORD *)a3 & 0x800000) == 0
    || !*((_DWORD *)a2 + 3)
    || ((*(_DWORD *)(v8 + 8) ^ (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFD) & 0xFFFFFFFE) == 0 )
  {
    *(_DWORD *)a2 = 1;
    if ( !*((_DWORD *)a3 + 26) && !_InterlockedExchange((volatile __int32 *)a3 + 26, 1) )
    {
      *(_DWORD *)a2 = 2;
      if ( a4 == 1 )
        *((_DWORD *)a3 + 12) |= 0x40000000u;
      else
        *((_DWORD *)a3 + 12) &= ~0x40000000u;
      *((_DWORD *)a3 + 28) = *((_DWORD *)a1 + 13);
      *((_DWORD *)a3 + 29) = *((_DWORD *)a1 + 11);
      *((_DWORD *)a3 + 30) = *((_DWORD *)a1 + 10);
      *((_QWORD *)a3 + 16) = a2;
      *((_QWORD *)a3 + 17) = *(_QWORD *)(*((_QWORD *)a1 + 10) + 48LL);
      *((_DWORD *)a3 + 36) = *((_DWORD *)a1 + 7);
      _InterlockedExchange((volatile __int32 *)a3 + 27, *((_DWORD *)a1 + 12));
    }
  }
}
