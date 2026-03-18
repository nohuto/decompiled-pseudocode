/*
 * XREFs of ?RemoveCompositionFrame@CCompositionFrameCollection@@UEAAJ_K@Z @ 0x1C0011000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionFrameCollection::RemoveCompositionFrame(CCompositionFrameCollection *this, __int64 a2)
{
  char *v2; // rsi
  unsigned int v5; // ebp
  CCompositionFrameCollection *i; // rdi
  CCompositionFrameCollection *v7; // rax
  CCompositionFrameCollection **v8; // rdx

  v2 = (char *)this + 32;
  v5 = -1073741275;
  ExAcquirePushLockExclusiveEx((char *)this + 32, 0LL);
  v2[8] = 1;
  for ( i = (CCompositionFrameCollection *)*((_QWORD *)this + 3);
        i != (CCompositionFrameCollection *)((char *)this + 16);
        i = (CCompositionFrameCollection *)*((_QWORD *)i + 1) )
  {
    if ( (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)i - 2) + 72LL))((__int64)i - 16) == a2 )
    {
      v7 = *(CCompositionFrameCollection **)i;
      if ( *(CCompositionFrameCollection **)(*(_QWORD *)i + 8LL) != i
        || (v8 = (CCompositionFrameCollection **)*((_QWORD *)i + 1), *v8 != i) )
      {
        __fastfail(3u);
      }
      *v8 = v7;
      *((_QWORD *)v7 + 1) = v8;
      (*(void (__fastcall **)(__int64))(*((_QWORD *)i - 2) + 8LL))((__int64)i - 16);
      v5 = 0;
      break;
    }
  }
  if ( v2[8] )
    ExReleasePushLockExclusiveEx(v2, 0LL);
  else
    ExReleasePushLockSharedEx(v2, 0LL);
  return v5;
}
