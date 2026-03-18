/*
 * XREFs of ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@II_K@Z @ 0x1C013FD18
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C002E240 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C002F768 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ?OwnsPointerId@CInputManager@@SA_NII@Z @ 0x1C0151524 (-OwnsPointerId@CInputManager@@SA_NII@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CapturePointer(
        __int64 a1,
        int a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v10; // ebx
  unsigned __int64 v11; // rdx
  struct DirectComposition::CResourceMarshaler *v12; // rdi
  int v13; // eax

  if ( !CInputManager::OwnsPointerId(*(_DWORD *)(a1 + 688), a4) )
    return (unsigned int)-1073741790;
  v11 = (unsigned int)(a2 - 1);
  if ( a2 && v11 < *(_QWORD *)(a1 + 80) )
  {
    _mm_lfence();
    v12 = *(struct DirectComposition::CResourceMarshaler **)(v11 * *(_QWORD *)(a1 + 88) + *(_QWORD *)(a1 + 56));
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12
    || !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v12 + 120LL))(
          v12,
          76LL) )
  {
    return (unsigned int)-1073741811;
  }
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v13 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v12 + 256LL))(
              v12,
              a1,
              a4,
              a5,
              a6);
      goto LABEL_13;
    }
    return (unsigned int)-1073741811;
  }
  v13 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64, _QWORD))(*(_QWORD *)v12 + 248LL))(
          v12,
          a1,
          a4);
LABEL_13:
  v10 = v13;
  if ( v13 >= 0 )
    DirectComposition::CApplicationChannel::PutResourceOnUpdatedList((DirectComposition::CApplicationChannel *)a1, v12);
  return v10;
}
