/*
 * XREFs of ?RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z @ 0x1C0033EE8
 * Callers:
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C00322E4 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z @ 0x1C002717C (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::RegisterChannel(
        DirectComposition::CConnection *this,
        struct DirectComposition::CChannel *a2,
        unsigned int *a3)
{
  struct _ERESOURCE *v3; // rbx
  int inserted; // eax
  unsigned int v8; // edi
  int v9; // ebx
  bool v10; // zf
  unsigned int v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct _ERESOURCE *)*((_QWORD *)this + 2);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v3, 1u);
  inserted = DirectComposition::CLinearObjectTableBase::InsertObject(
               (DirectComposition::CConnection *)((char *)this + 24),
               a2,
               &v12);
  v8 = v12;
  v9 = inserted;
  if ( inserted >= 0 )
    v8 = v12;
  ExReleaseResourceLite(*((PERESOURCE *)this + 2));
  KeLeaveCriticalRegion();
  if ( v9 >= 0 )
  {
    v10 = *((_DWORD *)this + 37) == 0;
    *a3 = v8;
    if ( v10 )
      return (unsigned int)-1073741300;
  }
  return (unsigned int)v9;
}
