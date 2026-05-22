/*
 * XREFs of ?RegisterEdgyControllerClient@EdgyControllerServer@@UEAAJPEAVBamoEdgyControllerServerStub@@PEBGPEAVBamoEdgyControllerClientProxy@@@Z @ 0x180067350
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetRouting@BamoEdgyControllerClientProxy@@UEAAIXZ @ 0x180066050 (-GetRouting@BamoEdgyControllerClientProxy@@UEAAIXZ.c)
 *     ?GetRunState@BamoEdgyControllerClientProxy@@UEAAIXZ @ 0x1800660F0 (-GetRunState@BamoEdgyControllerClientProxy@@UEAAIXZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x180066864 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x18006839C (-AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?OnControllerGestureDirectionChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z @ 0x1800686C0 (-OnControllerGestureDirectionChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2.c)
 *     ?OnControllerRoutingChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyInputRouting@Input@Internal@UI@Windows@@@Z @ 0x18006871C (-OnControllerRoutingChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyInputRouting@Input@.c)
 *     ?OnControllerRunStateChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyExperienceRunState@Input@Internal@UI@Windows@@@Z @ 0x180068790 (-OnControllerRunStateChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyExperienceRunState.c)
 *     ?OnControllerVertex0Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z @ 0x1800687F4 (-OnControllerVertex0Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z.c)
 *     ?OnControllerVertex1Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z @ 0x180068864 (-OnControllerVertex1Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z.c)
 */

__int64 __fastcall EdgyControllerServer::RegisterEdgyControllerClient(
        EdgyControllerServer *this,
        struct BamoEdgyControllerServerStub *a2,
        unsigned __int16 *a3,
        struct BamoEdgyControllerClientProxy *a4)
{
  Edges *v7; // rbp
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // r14
  DWORD CurrentThreadId; // eax
  const char *v12; // r9
  unsigned int Routing; // eax
  unsigned int RunState; // eax
  __int64 v15; // r14
  DWORD v16; // eax
  const char *v17; // r9
  __int64 v18; // r14
  DWORD v19; // eax
  const char *v20; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  std::wstring::operator=((_QWORD *)a4 + 10, a3);
  v7 = (Edges *)(*((_QWORD *)this + 7) + 72LL);
  v8 = Edges::AddOrUpdate(v7, a3, a4);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE0,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a4 + 4) + 24LL) + 24LL);
  CurrentThreadId = GetCurrentThreadId();
  if ( *(_DWORD *)(v10 + 136) != CurrentThreadId && *(_DWORD *)(v10 + 24) != CurrentThreadId )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x538,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      v12);
    __debugbreak();
  }
  Edges::OnControllerGestureDirectionChanged(v7, a4, (const struct D2D_VECTOR_2F *)a4 + 8);
  Routing = BamoEdgyControllerClientProxy::GetRouting((struct BamoEdgyControllerClientProxy *)((char *)a4 + 8));
  Edges::OnControllerRoutingChanged(v7, a4, Routing);
  RunState = BamoEdgyControllerClientProxy::GetRunState((struct BamoEdgyControllerClientProxy *)((char *)a4 + 8));
  Edges::OnControllerRunStateChanged(v7, a4, RunState);
  v15 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a4 + 4) + 24LL) + 24LL);
  v16 = GetCurrentThreadId();
  if ( *(_DWORD *)(v15 + 136) != v16 && *(_DWORD *)(v15 + 24) != v16 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x538,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      v17);
    __debugbreak();
  }
  Edges::OnControllerVertex0Changed(v7, a4, (const struct D2D_VECTOR_2F *)a4 + 6);
  v18 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a4 + 4) + 24LL) + 24LL);
  v19 = GetCurrentThreadId();
  if ( *(_DWORD *)(v18 + 136) != v19 && *(_DWORD *)(v18 + 24) != v19 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x538,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      v20);
    __debugbreak();
  }
  Edges::OnControllerVertex1Changed(v7, a4, (const struct D2D_VECTOR_2F *)a4 + 7);
  return v9;
}
