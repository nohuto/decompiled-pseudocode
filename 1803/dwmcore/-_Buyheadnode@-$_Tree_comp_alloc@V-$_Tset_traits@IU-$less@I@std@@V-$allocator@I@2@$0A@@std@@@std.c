/*
 * XREFs of ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@IPEAX@2@XZ @ 0x180023FDC
 * Callers:
 *     _anonymous_namespace_::SealCurrentFrameSequenceLocked @ 0x180022D44 (_anonymous_namespace_--SealCurrentFrameSequenceLocked.c)
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo @ 0x1800234E0 (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo.c)
 *     ??0CExpressionManager@@AEAA@XZ @ 0x18003ACA4 (--0CExpressionManager@@AEAA@XZ.c)
 *     ??0?$set@IU?$less@I@std@@V?$allocator@I@2@@std@@QEAA@XZ @ 0x1800C93D8 (--0-$set@IU-$less@I@std@@V-$allocator@I@2@@std@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 */

__int64 std::_Tree_comp_alloc<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Buyheadnode()
{
  __int64 result; // rax

  result = std::_Allocate<std::_Default_allocate_traits<1>>(1LL, 32LL);
  *(_QWORD *)result = result;
  *(_QWORD *)(result + 8) = result;
  *(_QWORD *)(result + 16) = result;
  *(_WORD *)(result + 24) = 257;
  return result;
}
