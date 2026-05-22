/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@Uhstring_insensitive_less@wil@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@@2@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x1800C8B88
 * Callers:
 *     ?CreateDynamicNodeReferenceWithState@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@AEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x1800C8360 (-CreateDynamicNodeReferenceWithState@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windo.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>,wil::hstring_insensitive_less,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>>,0>>::find(
        __int64 *a1,
        _QWORD *a2,
        HSTRING *a3)
{
  __int64 *v3; // rsi
  __int64 *v7; // rax
  __int64 *v8; // rdi
  const WCHAR *StringRawBuffer; // rbx
  const WCHAR *v10; // rax
  const WCHAR *v11; // rbx
  const WCHAR *v12; // rax
  _QWORD *result; // rax
  UINT32 v14[14]; // [rsp+30h] [rbp-38h] BYREF
  UINT32 v15; // [rsp+70h] [rbp+8h] BYREF
  UINT32 length; // [rsp+78h] [rbp+10h] BYREF
  UINT32 v17; // [rsp+88h] [rbp+20h] BYREF

  v3 = (__int64 *)*a1;
  v7 = (__int64 *)*a1;
  v8 = *(__int64 **)(*a1 + 8);
  if ( !*((_BYTE *)v8 + 25) )
  {
    do
    {
      StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)v8[4], &length);
      v10 = WindowsGetStringRawBuffer(*a3, &v15);
      if ( CompareStringOrdinal(StringRawBuffer, length, v10, v15, 1) == 1 )
      {
        v8 = (__int64 *)v8[2];
      }
      else
      {
        v3 = v8;
        v8 = (__int64 *)*v8;
      }
    }
    while ( !*((_BYTE *)v8 + 25) );
    v7 = (__int64 *)*a1;
  }
  if ( v3 == v7
    || (v11 = WindowsGetStringRawBuffer(*a3, v14),
        v12 = WindowsGetStringRawBuffer((HSTRING)v3[4], &v17),
        CompareStringOrdinal(v11, v14[0], v12, v17, 1) == 1) )
  {
    v3 = (__int64 *)*a1;
  }
  result = a2;
  *a2 = v3;
  return result;
}
