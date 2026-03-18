/*
 * XREFs of ??0ProtectableFromChange@@QEAA@EE@Z @ 0x1C00040F0
 * Callers:
 *     ??0DMMVIDPNTOPOLOGY@@QEAA@XZ @ 0x1C00042C8 (--0DMMVIDPNTOPOLOGY@@QEAA@XZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

ProtectableFromChange *__fastcall ProtectableFromChange::ProtectableFromChange(ProtectableFromChange *this)
{
  void *v2; // rax
  void *v3; // rax
  ProtectableFromChange *result; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  *(_QWORD *)this = &ProtectableFromChange::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_WORD *)this + 11) = 0;
  *((_BYTE *)this + 20) = 4;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 3) = &Vector<unsigned __int64>::`vftable';
  *((_QWORD *)this + 5) = 4LL;
  *((_DWORD *)this + 14) = 1;
  v2 = operator new[](4uLL, 0x4E506456u, PagedPool);
  *((_QWORD *)this + 6) = v2;
  if ( v2 )
  {
    memset(v2, 0, *((_QWORD *)this + 5));
    *((_DWORD *)this + 14) = 2;
  }
  else
  {
    v5 = WdLogNewEntry5_WdLowResource();
    WdLogEvent5_WdLowResource(v5);
    *((_DWORD *)this + 8) = -1073741801;
  }
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 10) = 4LL;
  *((_QWORD *)this + 8) = &Vector<unsigned __int64>::`vftable';
  *((_DWORD *)this + 24) = 1;
  v3 = operator new[](0x20uLL, 0x4E506456u, PagedPool);
  *((_QWORD *)this + 11) = v3;
  if ( v3 )
  {
    memset(v3, 0, 8LL * *((_QWORD *)this + 10));
    *((_DWORD *)this + 24) = 2;
  }
  else
  {
    v6 = WdLogNewEntry5_WdLowResource();
    WdLogEvent5_WdLowResource(v6);
    *((_DWORD *)this + 18) = -1073741801;
  }
  result = this;
  *((_DWORD *)this + 4) = 2;
  return result;
}
