/*
 * XREFs of ?AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@@Z @ 0x18004DBE8
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18004DC58 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18004E770 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall MPCSixDofProcessor::AreButtonsOrAxesActive(MPCSixDofProcessor *this, struct InputInfo *a2)
{
  bool result; // al
  float v3; // xmm1_4

  result = 1;
  if ( (*((_BYTE *)a2 + 1344) & 0x3F) == 0 && (!*((_BYTE *)a2 + 1379) || *((float *)a2 + 342) <= *((float *)this + 143)) )
  {
    if ( !*((_BYTE *)a2 + 1380) )
      return 0;
    v3 = *((float *)this + 142);
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a2 + 340)) & _xmm) <= v3
      && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a2 + 341)) & _xmm) <= v3 )
    {
      return 0;
    }
  }
  return result;
}
