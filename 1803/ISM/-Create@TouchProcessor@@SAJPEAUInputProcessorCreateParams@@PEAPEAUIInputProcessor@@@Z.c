/*
 * XREFs of ?Create@TouchProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18006AC80
 * Callers:
 *     <none>
 * Callees:
 *     ??0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z @ 0x180061518 (--0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  char *v4; // rax
  char *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 result; // rax
  PointerInfoAdapter *v9; // rax
  PointerInfoAdapter *v10; // rdi
  PointerInfoAdapter *v11; // rdx
  __int64 v12; // rcx

  v4 = (char *)malloc(0x40uLL);
  v5 = v4;
  if ( v4 )
    memset_0(v4, 0, 0x40uLL);
  if ( !v5 )
    return 2147942414LL;
  v6 = *((_QWORD *)a1 + 1);
  v7 = *(_QWORD *)a1;
  *((_QWORD *)v5 + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)v5 + 4) = 1;
  *((_QWORD *)v5 + 4) = v7;
  *((_QWORD *)v5 + 3) = v6;
  *(_QWORD *)v5 = &TouchProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)v5 + 1) = &TouchProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)v5 + 5) = &TouchProcessor::`vftable';
  *((_QWORD *)v5 + 6) = 0LL;
  *((_DWORD *)v5 + 14) = 0;
  v9 = (PointerInfoAdapter *)malloc(0x60uLL);
  v10 = v9;
  if ( v9 )
    memset_0(v9, 0, 0x60uLL);
  if ( v10 )
    v10 = PointerInfoAdapter::PointerInfoAdapter(v10, (struct IPointerInfoAdapterClient *)(v5 + 40));
  v11 = (PointerInfoAdapter *)*((_QWORD *)v5 + 6);
  if ( v11 != v10 )
  {
    v12 = *((_QWORD *)v5 + 6);
    if ( v10 )
    {
      (*(void (__fastcall **)(PointerInfoAdapter *))(*(_QWORD *)v10 + 8LL))(v10);
      v12 = *((_QWORD *)v5 + 6);
    }
    *((_QWORD *)v5 + 6) = v10;
    v11 = v10;
    if ( v12 )
    {
      (*(void (__fastcall **)(__int64, PointerInfoAdapter *))(*(_QWORD *)v12 + 16LL))(v12, v10);
      v11 = (PointerInfoAdapter *)*((_QWORD *)v5 + 6);
    }
  }
  result = v11 == 0LL ? 0x8007000E : 0;
  if ( v11 )
    *a2 = (struct IInputProcessor *)v5;
  return result;
}
