/*
 * XREFs of ?SetIntegerProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0142C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CGenericInkMarshaler::SetIntegerProperty(
        DirectComposition::CGenericInkMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  __int64 result; // rax
  int v6; // r8d
  int v7; // r8d
  __int64 v8; // rdx

  result = 0LL;
  *a5 = 0;
  v6 = a3 - 1;
  if ( !v6 )
  {
    if ( a4 )
    {
      v8 = *((_QWORD *)this + 11);
      if ( !v8 )
      {
        *((_QWORD *)this + 11) = a4;
        return result;
      }
      goto LABEL_11;
    }
    return 3221225990LL;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( a4 )
    {
      v8 = *((_QWORD *)this + 18);
      if ( !v8 )
      {
        *((_QWORD *)this + 18) = a4;
        return result;
      }
LABEL_11:
      if ( a4 == v8 )
        return result;
      return 3221225990LL;
    }
    return 3221225990LL;
  }
  if ( v7 == 2 )
    return DirectComposition::CGenericInkMarshaler::RemoveSegmentsAtEnd(this, a4, a5);
  else
    return 3221225485LL;
}
