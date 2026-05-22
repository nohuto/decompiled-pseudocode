/*
 * XREFs of ?Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1800AE65C
 * Callers:
 *     ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x180075AF4 (-Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180075ACC (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$_Buynode@W4GazeProperty@@G@?$_Tree_comp_alloc@V?$_Tmap_traits@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@1@$$QEAW4GazeProperty@@$$QEAG@Z @ 0x1800AF0C0 (--$_Buynode@W4GazeProperty@@G@-$_Tree_comp_alloc@V-$_Tmap_traits@W4GazeProperty@@GU-$less@W4Gaze.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBW4GazeProperty@@G@std@@PEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4GazeProperty@@G@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBW4GazeProperty@@G@1@PEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@1@@Z @ 0x1800AF100 (--$_Insert_nohint@AEAU-$pair@$$CBW4GazeProperty@@G@std@@PEAU-$_Tree_node@U-$pair@$$CBW4GazePrope.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E212C (--_U@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeHidParser::Initialize(PHIDP_CAPS Capabilities, PHIDP_PREPARSED_DATA PreparsedData)
{
  NTSTATUS Caps; // eax
  unsigned int i; // edi
  __int16 v6; // r15
  __int16 v7; // bx
  unsigned __int64 NumberLinkCollectionNodes; // rax
  __int64 v9; // r9
  __int64 v10; // rdx
  struct _HIDP_LINK_COLLECTION_NODE *v11; // rax
  NTSTATUS LinkCollectionNodes; // eax
  int v13; // ebx
  __int64 v14; // rcx
  bool v15; // zf
  void *v16; // rax
  int v17; // r8d
  int v18; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  ULONG LinkCollectionNodesLength; // [rsp+80h] [rbp+8h] BYREF
  void *Block; // [rsp+88h] [rbp+10h] BYREF

  *(_QWORD *)&Capabilities[1].Usage = PreparsedData;
  Caps = HidP_GetCaps(PreparsedData, Capabilities);
  if ( Caps < 0 )
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x18,
             (__int64)"onecoreuap\\windows\\input\\gaze\\hid\\lib\\gazehidparser.cpp",
             (const char *)(unsigned int)Caps);
  for ( i = 0; i < 0xB; ++i )
  {
    Block = 0LL;
    v6 = 0;
    switch ( i )
    {
      case 6u:
        v7 = 36;
        break;
      case 7u:
        v7 = 37;
        break;
      case 8u:
        v7 = 38;
        break;
      case 9u:
        v7 = 39;
        break;
      case 0xAu:
        v7 = 40;
        break;
      default:
        goto LABEL_40;
    }
    NumberLinkCollectionNodes = Capabilities->NumberLinkCollectionNodes;
    LinkCollectionNodesLength = NumberLinkCollectionNodes;
    if ( !(_DWORD)NumberLinkCollectionNodes )
    {
      v9 = 2205548546LL;
      v10 = 91LL;
      goto LABEL_17;
    }
    v11 = (struct _HIDP_LINK_COLLECTION_NODE *)operator new[](saturated_mul(NumberLinkCollectionNodes, 0x18uLL));
    Block = v11;
    if ( !v11 )
    {
      v9 = 2147942414LL;
      v10 = 95LL;
      goto LABEL_17;
    }
    LinkCollectionNodes = HidP_GetLinkCollectionNodes(
                            v11,
                            &LinkCollectionNodesLength,
                            *(PHIDP_PREPARSED_DATA *)&Capabilities[1].Usage);
    if ( LinkCollectionNodes >= 0 )
    {
      v14 = 0LL;
      if ( LinkCollectionNodesLength )
      {
        while ( *((_WORD *)Block + 12 * v14 + 1) != 18 || *((_WORD *)Block + 12 * v14) != v7 )
        {
          v14 = (unsigned int)(v14 + 1);
          v15 = (_DWORD)v14 == LinkCollectionNodesLength;
          if ( (unsigned int)v14 >= LinkCollectionNodesLength )
            goto LABEL_32;
        }
        v6 = v14;
      }
      v15 = (_DWORD)v14 == LinkCollectionNodesLength;
LABEL_32:
      if ( v15 )
      {
        v9 = 2147500037LL;
        v10 = 113LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (__int64)"onecoreuap\\windows\\input\\gaze\\hid\\lib\\gazehidparser.cpp",
          (const char *)v9);
        if ( Block )
          operator delete(Block);
        continue;
      }
      if ( Block )
        operator delete(Block);
      v13 = 0;
    }
    else
    {
      v13 = wil::details::in1diag3::Return_NtStatus(
              retaddr,
              (void *)0x64,
              (__int64)"onecoreuap\\windows\\input\\gaze\\hid\\lib\\gazehidparser.cpp",
              (const char *)(unsigned int)LinkCollectionNodes);
      if ( Block )
        operator delete(Block);
    }
    if ( v13 < 0 )
      continue;
LABEL_40:
    try
    {
      LOWORD(LinkCollectionNodesLength) = v6;
      LODWORD(Block) = i;
      v16 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<enum GazeProperty,unsigned short,std::less<enum GazeProperty>,std::allocator<std::pair<enum GazeProperty const,unsigned short>>,0>>::_Buynode<enum GazeProperty,unsigned short>(
                      &Capabilities[1].FeatureReportByteLength,
                      &Block,
                      &LinkCollectionNodesLength);
      std::_Tree<std::_Tmap_traits<enum GazeProperty,unsigned short,std::less<enum GazeProperty>,std::allocator<std::pair<enum GazeProperty const,unsigned short>>,0>>::_Insert_nohint<std::pair<enum GazeProperty const,unsigned short> &,std::_Tree_node<std::pair<enum GazeProperty const,unsigned short>,void *> *>(
        (_DWORD)Capabilities + 72,
        (int)&v18,
        v17,
        (_DWORD)v16 + 28,
        v16);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2B,
        (__int64)"onecoreuap\\windows\\input\\gaze\\hid\\lib\\gazehidparser.cpp",
        (const char *)0x8007000ELL);
      return 2147942414LL;
    }
  }
  return 0LL;
}
