/*
 * XREFs of ?GetSubmix@CAudioStream@@UEAAJPEAPEAUISubmixProxy@@@Z @ 0x1800B5A90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::GetSubmix(CAudioStream *this, struct ISubmixProxy **a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  if ( a2 )
  {
    *a2 = (struct ISubmixProxy *)*((_QWORD *)this + 7);
    v3 = *((_QWORD *)this + 7);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}
