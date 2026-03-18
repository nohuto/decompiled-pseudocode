/*
 * XREFs of ??1DXGPRESENT@@QEAA@XZ @ 0x1C009184C
 * Callers:
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1C00BC120 (--1DXGCONTEXT@@QEAA@XZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 */

void __fastcall DXGPRESENT::~DXGPRESENT(DXGPRESENT *this)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 i; // rdi
  unsigned int v5; // ecx
  void *v6; // rcx

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  *((_QWORD *)this + 2) = 0LL;
  v3 = (void *)*((_QWORD *)this + 15);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  *((_QWORD *)this + 15) = 0LL;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v5 = 1;
    if ( *((_DWORD *)this + 17) )
      v5 = *((_DWORD *)this + 17);
    if ( (unsigned int)i >= v5 )
      break;
    v6 = (void *)*((_QWORD *)this + i + 28);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    *((_QWORD *)this + i + 28) = 0LL;
  }
  operator delete[](*((void **)this + 139));
  operator delete[](*((void **)this + 105));
  operator delete[](*((void **)this + 91));
}
