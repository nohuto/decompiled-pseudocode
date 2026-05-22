/*
 * XREFs of ?Create@KeyboardProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180069B30
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x18003A904 (-Create@KeyboardModifierState@@SAJPEAPEAV1@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  void *v4; // rax
  void *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rcx

  v4 = malloc(0x40uLL);
  v5 = v4;
  if ( v4 )
    memset_0(v4, 0, 0x40uLL);
  if ( !v5 )
    return 2147942414LL;
  v6 = *(_QWORD *)a1;
  v7 = *((_QWORD *)a1 + 1);
  *((_QWORD *)v5 + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)v5 + 4) = 1;
  *((_QWORD *)v5 + 4) = v6;
  *(_QWORD *)v5 = &KeyboardProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)v5 + 1) = &KeyboardProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)v5 + 3) = v7;
  *((_DWORD *)v5 + 10) = 0;
  *((_DWORD *)v5 + 11) = 300;
  *((_QWORD *)v5 + 6) = 0LL;
  *((_DWORD *)v5 + 14) = 0;
  v9 = *((_QWORD *)v5 + 6);
  if ( v9 )
  {
    *((_QWORD *)v5 + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  result = KeyboardModifierState::Create((struct KeyboardModifierState **)v5 + 6);
  if ( (int)result >= 0 )
    *a2 = (struct IInputProcessor *)v5;
  return result;
}
