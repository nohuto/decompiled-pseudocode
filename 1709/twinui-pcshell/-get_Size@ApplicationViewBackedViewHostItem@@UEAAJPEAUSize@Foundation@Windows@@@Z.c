/*
 * XREFs of ?get_Size@ApplicationViewBackedViewHostItem@@UEAAJPEAUSize@Foundation@Windows@@@Z @ 0x18010E0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get_CompositionId@ApplicationViewBackedViewHostItem@@UEAAJPEAI@Z @ 0x18010D160 (-get_CompositionId@ApplicationViewBackedViewHostItem@@UEAAJPEAI@Z.c)
 *     ??$ApplicationViewBackedViewHostItem_get_Size@AEAIAEAMAEAM@HolographicPositionerTelemetry@@SAXAEAIAEAM1@Z @ 0x18010F74C (--$ApplicationViewBackedViewHostItem_get_Size@AEAIAEAMAEAM@HolographicPositionerTelemetry@@SAXAE.c)
 */

__int64 __fastcall ApplicationViewBackedViewHostItem::get_Size(
        ApplicationViewBackedViewHostItem *this,
        struct Windows::Foundation::Size *a2)
{
  int CompositionId; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)a2 = *((_DWORD *)this + 37);
  *((_DWORD *)a2 + 1) = *((_DWORD *)this + 38);
  CompositionId = ApplicationViewBackedViewHostItem::get_CompositionId(this, &v7);
  v4 = CompositionId;
  if ( CompositionId >= 0 )
  {
    HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_get_Size<unsigned int &,float &,float &>(
      &v7,
      a2,
      (char *)a2 + 4);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x163,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)(unsigned int)CompositionId);
    return v4;
  }
}
