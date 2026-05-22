/*
 * XREFs of ?RemoveAllObjectsForElement@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z @ 0x18000EEE8
 * Callers:
 *     ??_GInputSiteElementProxy@@UEAAPEAXI@Z @ 0x18000DCB0 (--_GInputSiteElementProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??4AttachedInputObjectEntry@InputSite@@QEAAAEAU01@$$QEAU01@@Z @ 0x18000E594 (--4AttachedInputObjectEntry@InputSite@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall InputSite::RemoveAllObjectsForElement(InputSite *this, struct InputSiteElementProxy *a2)
{
  struct InputSiteElementProxy **v3; // rdi
  struct InputSiteElementProxy **i; // rbx
  struct InputSiteElementProxy **j; // rsi
  struct InputSiteElementProxy **v6; // rsi
  struct InputSiteElementProxy **v7; // rdi
  struct InputSiteElementProxy **v8; // rcx
  struct InputSiteElementProxy *v9; // [rsp+48h] [rbp+10h]

  v9 = a2;
  v3 = (struct InputSiteElementProxy **)*((_QWORD *)this + 4);
  for ( i = (struct InputSiteElementProxy **)*((_QWORD *)this + 3); i != v3 && *i != a2; i += 9 )
    ;
  if ( i != v3 )
  {
    for ( j = i + 9; j != v3; j += 9 )
    {
      if ( *j != a2 )
      {
        InputSite::AttachedInputObjectEntry::operator=((__int64)i, j);
        i += 9;
        a2 = v9;
      }
    }
    if ( i != v3 )
    {
      v6 = (struct InputSiteElementProxy **)*((_QWORD *)this + 4);
      if ( v3 != v6 )
      {
        do
        {
          InputSite::AttachedInputObjectEntry::operator=((__int64)i, v3);
          i += 9;
          v3 += 9;
        }
        while ( v3 != v6 );
        v6 = (struct InputSiteElementProxy **)*((_QWORD *)this + 4);
      }
      if ( i != v6 )
      {
        v7 = i + 7;
        while ( ((_DWORD)v7[1] & 3) != 1LL )
        {
          if ( ((_DWORD)v7[1] & 3) == 2LL )
          {
            v8 = v7 - 6;
LABEL_21:
            (*(void (__fastcall **)(struct InputSiteElementProxy **))*v7)(v8);
          }
          v7[1] = 0LL;
          v7 += 9;
          if ( v7 - 7 == v6 )
            goto LABEL_23;
        }
        v8 = (struct InputSiteElementProxy **)*(v7 - 1);
        goto LABEL_21;
      }
LABEL_23:
      *((_QWORD *)this + 4) = i;
    }
  }
}
