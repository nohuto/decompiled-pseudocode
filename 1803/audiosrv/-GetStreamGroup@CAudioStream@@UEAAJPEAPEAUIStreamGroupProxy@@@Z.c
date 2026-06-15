/*
 * XREFs of ?GetStreamGroup@CAudioStream@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x18002DFC0
 * Callers:
 *     ?DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800448C0 (-DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::GetStreamGroup(CAudioStream *this, struct IStreamGroupProxy **a2)
{
  CProcessSubmixProxy *v2; // rcx
  __int64 (__fastcall *v3)(CProcessSubmixProxy *, struct IStreamGroupProxy **); // rax
  struct IStreamGroupProxy *v4; // rcx
  unsigned int v5; // ebx

  v2 = (CProcessSubmixProxy *)*((_QWORD *)this + 7);
  v3 = *(__int64 (__fastcall **)(CProcessSubmixProxy *, struct IStreamGroupProxy **))(*(_QWORD *)v2 + 80LL);
  if ( v3 == CProcessSubmixProxy::GetConnectedStreamGroup )
  {
    v4 = (struct IStreamGroupProxy *)*((_QWORD *)v2 + 24);
    v5 = 0;
    if ( v4 )
    {
      *a2 = v4;
      (*(void (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v4 + 8LL))(v4);
    }
    else
    {
      *a2 = 0LL;
    }
  }
  else
  {
    return (unsigned int)v3(v2, a2);
  }
  return v5;
}
