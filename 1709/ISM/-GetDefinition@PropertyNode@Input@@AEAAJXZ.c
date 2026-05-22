/*
 * XREFs of ?GetDefinition@PropertyNode@Input@@AEAAJXZ @ 0x180030F18
 * Callers:
 *     ??0PropertyMap@Input@@QEAA@XZ @ 0x180016B84 (--0PropertyMap@Input@@QEAA@XZ.c)
 *     ?s_HitTestHandler@DWMInputRouter@@SAJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18001CC60 (-s_HitTestHandler@DWMInputRouter@@SAJPEAUIHitTestRequest@@PEAXPEAV-$vector@V-$ComPtr@UIInputTarg.c)
 *     ?RuntimeClassInitialize@DisplayBinding@@QEAAJIU_GUID@@W4Dimension@@@Z @ 0x180022F90 (-RuntimeClassInitialize@DisplayBinding@@QEAAJIU_GUID@@W4Dimension@@@Z.c)
 *     ?SetInputDisplay@DisplayBinding@@QEAAJPEAUIInputDisplay@@@Z @ 0x1800237E4 (-SetInputDisplay@DisplayBinding@@QEAAJPEAUIInputDisplay@@@Z.c)
 *     ?SetId@PropertyNode@Input@@UEAAXU_GUID@@@Z @ 0x180030EA0 (-SetId@PropertyNode@Input@@UEAAXU_GUID@@@Z.c)
 *     ??4PropertyNode@Input@@UEAAAEAV01@$$QEAV01@@Z @ 0x180030EF0 (--4PropertyNode@Input@@UEAAAEAV01@$$QEAV01@@Z.c)
 *     ?CreateFromStream@PropertyNode@Input@@KAJIPEAUIStream@@PEAKPEAPEAV12@@Z @ 0x180030F88 (-CreateFromStream@PropertyNode@Input@@KAJIPEAUIStream@@PEAKPEAPEAV12@@Z.c)
 *     ??4Property@Input@@UEAAAEAV01@AEBV01@@Z @ 0x1800313B0 (--4Property@Input@@UEAAAEAV01@AEBV01@@Z.c)
 *     ??4Property@Input@@UEAAAEAV01@$$QEAV01@@Z @ 0x180031420 (--4Property@Input@@UEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4PropertyMap@Input@@QEAAAEAV01@$$QEAV01@@Z @ 0x180031870 (--4PropertyMap@Input@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4PropertyMap@Input@@UEAAAEAVPropertyNode@1@AEBV21@@Z @ 0x1800318F0 (--4PropertyMap@Input@@UEAAAEAVPropertyNode@1@AEBV21@@Z.c)
 *     ??4PropertyVector@Input@@UEAAAEAV01@AEBV01@@Z @ 0x180032050 (--4PropertyVector@Input@@UEAAAEAV01@AEBV01@@Z.c)
 *     ??4PropertyVector@Input@@UEAAAEAV01@$$QEAV01@@Z @ 0x1800320A0 (--4PropertyVector@Input@@UEAAAEAV01@$$QEAV01@@Z.c)
 * Callees:
 *     ?Get@PropertyDefinitions@@SAJPEAPEAV1@@Z @ 0x1800331C0 (-Get@PropertyDefinitions@@SAJPEAPEAV1@@Z.c)
 *     ?QueryProperty@PropertyDefinitions@@QEBAJAEBU_GUID@@PEAPEBUPropertyInfo@Input@@@Z @ 0x180033A38 (-QueryProperty@PropertyDefinitions@@QEBAJAEBU_GUID@@PEAPEBUPropertyInfo@Input@@@Z.c)
 */

__int64 __fastcall Input::PropertyNode::GetDefinition(Input::PropertyNode *this)
{
  int v2; // edx
  PropertyDefinitions *v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = -2147024809;
  if ( *((_QWORD *)this + 1) != *(_QWORD *)&DirectX::g_XMZero.Data1
    || *((_QWORD *)this + 2) != *(_QWORD *)DirectX::g_XMZero.Data4 )
  {
    v2 = PropertyDefinitions::Get(&v4);
    if ( v2 >= 0 )
      return (unsigned int)PropertyDefinitions::QueryProperty(
                             v4,
                             (const struct _GUID *)((char *)this + 8),
                             (const struct Input::PropertyInfo **)this + 3);
  }
  return (unsigned int)v2;
}
