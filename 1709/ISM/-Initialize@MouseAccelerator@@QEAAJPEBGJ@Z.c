/*
 * XREFs of ?Initialize@MouseAccelerator@@QEAAJPEBGJ@Z @ 0x18006CEEC
 * Callers:
 *     ?Initialize@MouseProcessor@@IEAAJPEBGJ@Z @ 0x18006BB64 (-Initialize@MouseProcessor@@IEAAJPEBGJ@Z.c)
 * Callees:
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x180009738 (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MouseAccelerator::Initialize(MouseAccelerator *this, const unsigned __int16 *a2, int a3)
{
  struct RegistryWatcher **v3; // rdi
  __int64 v5; // rcx
  __int64 result; // rax
  int v7; // eax
  __int64 v8; // xmm1_8

  v3 = (struct RegistryWatcher **)((char *)this + 272);
  *((_QWORD *)this + 31) = a2;
  *((_DWORD *)this + 64) = a3;
  v5 = *((_QWORD *)this + 34);
  if ( v5 )
  {
    *v3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  result = RegistryWatcher::Create(
             v5,
             L"SYSTEM\\Mouse",
             this,
             (void (*)(void *, HKEY))MouseAccelerator::OnMouseRegistryKeyChangeStatic,
             v3);
  if ( (int)result < 0 )
  {
    v7 = *((_DWORD *)this + 64);
    *(_OWORD *)this = xmmword_18010E2A8;
    *((_OWORD *)this + 1) = xmmword_18010E2B8;
    *((_QWORD *)this + 4) = qword_18010E2C8;
    *(_OWORD *)((char *)this + 40) = xmmword_18010E280;
    *(_OWORD *)((char *)this + 56) = xmmword_18010E290;
    v8 = qword_18010E2A0;
    *((_DWORD *)this + 65) = v7;
    result = 0LL;
    *((_QWORD *)this + 9) = v8;
  }
  return result;
}
