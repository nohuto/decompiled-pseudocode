/*
 * XREFs of EditionPostInertiaMessage @ 0x1C01C0760
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     QueryInertiaInfo @ 0x1C020D930 (QueryInertiaInfo.c)
 *     zzzPostInertiaMessage @ 0x1C020DBB4 (zzzPostInertiaMessage.c)
 */

__int64 __fastcall EditionPostInertiaMessage(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 InertiaInfo; // rax
  char v7; // [rsp+48h] [rbp+10h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v7);
  if ( (unsigned int)(*(_DWORD *)a2 - 2) <= 1 )
  {
    InertiaInfo = QueryInertiaInfo(&gInertiaInfo, *(_QWORD *)(a2 + 48), 0LL);
    if ( InertiaInfo )
    {
      if ( (*(_DWORD *)(InertiaInfo + 136) & 0x10) == 0 )
        zzzPostInertiaMessage(a3, 0);
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v7);
  return 1LL;
}
