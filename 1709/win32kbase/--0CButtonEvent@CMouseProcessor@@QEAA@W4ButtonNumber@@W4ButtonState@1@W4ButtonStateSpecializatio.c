/*
 * XREFs of ??0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecialization@1@PEBVCMouseEvent@1@@Z @ 0x1C0018438
 * Callers:
 *     ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C00159E0 (-ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::IsMouseButtonSwapped @ 0x1C00185A8 (_anonymous_namespace_--IsMouseButtonSwapped.c)
 */

__int64 __fastcall CMouseProcessor::CButtonEvent::CButtonEvent(__int64 a1, __int64 a2, int a3, int a4, __int64 *a5)
{
  __int64 v6; // r10
  __int64 v7; // rcx
  void *v8; // rax

  v6 = *a5;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 12) = a2;
  *(_DWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 20) = a4;
  if ( (*(_DWORD *)(v6 + 88) & 0x800) == 0 )
  {
    v7 = (unsigned int)a2;
    LOBYTE(a2) = a3 == 2;
    if ( (unsigned __int8)anonymous_namespace_::IsMouseButtonSwapped(v7, a2) )
      *(_DWORD *)(a1 + 8) ^= 3u;
  }
  switch ( *(_DWORD *)(a1 + 8) )
  {
    case 1:
      v8 = &CMouseProcessor::CButtonEvent::_dependentInfo;
      break;
    case 2:
      v8 = &unk_1C0160398;
      break;
    case 4:
      v8 = &unk_1C01603B0;
      break;
    case 8:
      v8 = &unk_1C01603C8;
      break;
    case 0x10:
      v8 = &unk_1C01603E0;
      break;
    default:
      return a1;
  }
  *(_QWORD *)(a1 + 24) = v8;
  return a1;
}
