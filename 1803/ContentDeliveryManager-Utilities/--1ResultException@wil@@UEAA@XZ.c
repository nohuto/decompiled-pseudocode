/*
 * XREFs of ??1ResultException@wil@@UEAA@XZ @ 0x1800025C0
 * Callers:
 *     ??_GResultException@wil@@UEAAPEAXI@Z @ 0x180002590 (--_GResultException@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::ResultException::~ResultException(wil::ResultException *this)
{
  volatile signed __int32 *v2; // rcx
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v4; // rcx
  HANDLE v5; // rax

  v2 = (volatile signed __int32 *)*((_QWORD *)this + 23);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, *((LPVOID *)this + 23));
    }
    *((_QWORD *)this + 23) = 0LL;
    *((_QWORD *)this + 24) = 0LL;
  }
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 21);
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4, 0xFFFFFFFF) == 1 )
    {
      v5 = GetProcessHeap();
      HeapFree(v5, 0, *((LPVOID *)this + 21));
    }
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
  }
  exception::~exception(this);
}
