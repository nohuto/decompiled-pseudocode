/*
 * XREFs of ??1CDeviceGraphObjectsStore@@UEAA@XZ @ 0x1800CC360
 * Callers:
 *     ??_ECDeviceGraphObjectsStore@@UEAAPEAXI@Z @ 0x1800CC880 (--_ECDeviceGraphObjectsStore@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180060AB8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CDeviceGraphObjectsStore::~CDeviceGraphObjectsStore(CDeviceGraphObjectsStore *this)
{
  __int64 *v2; // rbx
  __int64 *v3; // rsi
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  HANDLE ProcessHeap; // rax
  void *v8; // rcx

  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  `eh vector destructor iterator'(
    (char *)this + 88,
    24LL,
    4LL,
    (void (*)(void *))std::vector<Microsoft::WRL::WeakRef>::~vector<Microsoft::WRL::WeakRef>);
  v2 = (__int64 *)*((_QWORD *)this + 8);
  if ( v2 )
  {
    v3 = (__int64 *)*((_QWORD *)this + 9);
    if ( v2 != v3 )
    {
      do
      {
        v4 = *v2;
        if ( *v2 )
        {
          *v2 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
        ++v2;
      }
      while ( v2 != v3 );
      v2 = (__int64 *)*((_QWORD *)this + 8);
    }
    v5 = (__int64)(*((_QWORD *)this + 10) - (_QWORD)v2) >> 3;
    if ( v5 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v5 < 0x1000 )
      {
LABEL_13:
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v2);
        *((_QWORD *)this + 8) = 0LL;
        *((_QWORD *)this + 9) = 0LL;
        *((_QWORD *)this + 10) = 0LL;
        goto LABEL_14;
      }
      if ( ((unsigned __int8)v2 & 0x1F) == 0 )
      {
        v6 = *(v2 - 1);
        if ( v6 < (unsigned __int64)v2 && (unsigned __int64)v2 - v6 - 8 <= 0x1F )
        {
          v2 = (__int64 *)*(v2 - 1);
          goto LABEL_13;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(0x1FFFFFFFFFFFFFFFLL);
    JUMPOUT(0x1800CC487LL);
  }
LABEL_14:
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v8 = (void *)*((_QWORD *)this + 2);
  if ( v8 )
    CoTaskMemFree(v8);
  *((_DWORD *)this + 3) = -1073741823;
}
