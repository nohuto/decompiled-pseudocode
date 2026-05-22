/*
 * XREFs of ?HandlePropertyRequestCompletion@Holographic@Internal@Windows@@YAXAEAV?$map@PEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@U?$less@PEAVV2PropertyRequest@Holographic@Internal@Windows@@@6@V?$allocator@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@@6@@std@@PEAX@Z @ 0x1800C1C94
 * Callers:
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x1800C2EFC (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1800A1100 (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     ?HandleCompletion@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXJ_K@Z @ 0x1800C1A48 (-HandleCompletion@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXJ_K@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@U?$less@PEAVV2PropertyRequest@Holographic@Internal@Windows@@@6@V?$allocator@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x1800CAFC4 (-erase@-$_Tree@V-$_Tmap_traits@PEAVV2PropertyRequest@Holographic@Internal@Windows@@V-$unique_ptr.c)
 */

__int64 __fastcall Windows::Internal::Holographic::HandlePropertyRequestCompletion(__int64 ***a1, void *a2)
{
  unsigned int v3; // ebx
  signed int LastError; // eax
  const char *v5; // r9
  Windows::Internal::Holographic::V2PropertyRequest *v6; // rdi
  __int64 **v7; // r8
  __int64 **v8; // r9
  __int64 *v9; // rcx
  __int64 *v10; // rax
  unsigned __int64 v11; // rax
  __int64 **v12; // rdx
  __int64 *j; // rax
  __int64 **v14; // rcx
  __int64 *v15; // rdx
  __int64 *i; // rcx
  char *v18; // [rsp+28h] [rbp-30h]
  _BYTE v19[40]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int64 v21; // [rsp+60h] [rbp+8h] BYREF
  char *v22; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v23; // [rsp+78h] [rbp+20h] BYREF

  LODWORD(v21) = 0;
  v23 = 0LL;
  v22 = 0LL;
  v3 = 0;
  if ( !GetQueuedCompletionStatus(a2, (LPDWORD)&v21, &v23, (LPOVERLAPPED *)&v22, 0) )
  {
    LastError = GetLastError();
    v3 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v3 = LastError;
  }
  LODWORD(v18) = v3;
  wil::details::in1diag3::FailFast_IfMsg(
    retaddr,
    (void *)0x105,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertyrequests.h",
    (const char *)(v22 == 0LL),
    (unsigned __int16 *)"GetQueuedCompletionStatus() failed and didn't return a pOverlapped, hr = 0x%x",
    v18);
  if ( v22 )
    v6 = (Windows::Internal::Holographic::V2PropertyRequest *)(v22 - 8);
  else
    v6 = 0LL;
  Windows::Internal::Holographic::V2PropertyRequest::HandleCompletion(v6, v3, (unsigned int)v21, v5);
  v7 = *a1;
  v8 = *a1;
  v9 = (*a1)[1];
  v10 = v9;
  while ( !*((_BYTE *)v10 + 25) )
  {
    if ( v10[4] >= (unsigned __int64)v6 )
    {
      if ( *((_BYTE *)v8 + 25) && (unsigned __int64)v6 < v10[4] )
        v8 = (__int64 **)v10;
      v7 = (__int64 **)v10;
      v10 = (__int64 *)*v10;
    }
    else
    {
      v10 = (__int64 *)v10[2];
    }
  }
  if ( !*((_BYTE *)v8 + 25) )
    v9 = *v8;
  while ( !*((_BYTE *)v9 + 25) )
  {
    v11 = v9[4];
    v12 = (__int64 **)v9;
    if ( (unsigned __int64)v6 >= v11 )
      v9 = (__int64 *)v9[2];
    else
      v9 = (__int64 *)*v9;
    if ( (unsigned __int64)v6 >= v11 )
      v12 = v8;
    v8 = v12;
  }
  j = (__int64 *)v7;
  if ( v7 != v8 )
  {
    do
    {
      if ( !*((_BYTE *)j + 25) )
      {
        v14 = (__int64 **)j[2];
        if ( *((_BYTE *)v14 + 25) )
        {
          for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
            j = i;
          j = i;
        }
        else
        {
          v15 = *v14;
          for ( j = (__int64 *)j[2]; !*((_BYTE *)v15 + 25); v15 = (__int64 *)*v15 )
            j = v15;
        }
      }
    }
    while ( j != (__int64 *)v8 );
  }
  return std::_Tree<std::_Tmap_traits<Windows::Internal::Holographic::V2PropertyRequest *,std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>,std::less<Windows::Internal::Holographic::V2PropertyRequest *>,std::allocator<std::pair<Windows::Internal::Holographic::V2PropertyRequest * const,std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>>,0>>::erase(
           a1,
           v19);
}
