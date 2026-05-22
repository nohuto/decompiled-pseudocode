/*
 * XREFs of ?DeliverInput@InputRedirectionTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800B5BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z @ 0x1800623CC (--0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputRedirectionTarget::DeliverInput(
        InputRedirectionTarget *this,
        struct InputInfo *a2,
        __int64 a3,
        const char *a4)
{
  int v5; // ebx
  int v7; // [rsp+38h] [rbp-20h] BYREF
  void *Block; // [rsp+40h] [rbp-18h]

  if ( a2 )
  {
    v5 = 0;
    if ( *((_QWORD *)this + 4) )
    {
      if ( (*(_BYTE *)a2 & 0x3B) != 0 )
      {
        *((_QWORD *)a2 + 48) = *((_QWORD *)this + 6);
      }
      else if ( *(_DWORD *)a2 == 0x4000 )
      {
        *((_QWORD *)a2 + 4) = *((_QWORD *)this + 6);
      }
      InputEventPayloadBuffer::InputEventPayloadBuffer((__int64)&v7, 4, (int *)a2, a4);
      v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, void *, int))(**((_QWORD **)this + 3) + 152LL))(
             *((_QWORD *)this + 3),
             *((_QWORD *)this + 4),
             4LL,
             Block,
             v7);
      if ( v5 < 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 144LL))(
          *((_QWORD *)this + 3),
          *((_QWORD *)this + 4));
        *((_QWORD *)this + 4) = 0LL;
        v5 = 0;
      }
      if ( Block )
        operator delete(Block);
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v5;
}
