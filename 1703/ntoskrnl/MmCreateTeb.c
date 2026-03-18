/*
 * XREFs of MmCreateTeb @ 0x140516370
 * Callers:
 *     PspAllocateThread @ 0x14053F490 (PspAllocateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiCreatePebOrTeb @ 0x1405162FC (MiCreatePebOrTeb.c)
 */

__int64 __fastcall MmCreateTeb(
        _KPROCESS *BugCheckParameter1,
        unsigned __int64 a2,
        _QWORD *a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  unsigned __int64 v8; // rbx
  int v9; // edi
  __int64 v10; // r15
  unsigned __int64 v11; // rax
  int v12; // esi
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  __int16 v16; // cx
  unsigned __int64 v17; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-70h]
  unsigned __int64 *v19; // [rsp+30h] [rbp-68h]
  $5BC46E0569261879018906DEC3127961 v20; // [rsp+38h] [rbp-60h] BYREF

  v18 = a2;
  v19 = a5;
  v8 = 0LL;
  v9 = 1;
  v10 = 0LL;
  v11 = BugCheckParameter1[1].ActiveProcessors.Bitmap[7];
  if ( v11 )
  {
    v16 = *(_WORD *)(v11 + 8);
    if ( v16 == 332 || v16 == 452 )
      v10 = *(_QWORD *)v11;
  }
  if ( v10 )
    v9 = 2;
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v20);
  v12 = MiCreatePebOrTeb(v9, a4, &v17);
  if ( v12 < 0 )
  {
    KiUnstackDetachProcess(&v20, 0LL);
  }
  else
  {
    v13 = v17;
    *(_DWORD *)(v17 + 32) = 7680;
    *(_DWORD *)(v13 + 744) = 65534;
    *(_WORD *)(v13 + 4698) = 522;
    *(_QWORD *)(v13 + 4704) = v13 + 4712;
    *(_QWORD *)(v13 + 72) = a3[1];
    *(_QWORD *)(v13 + 64) = *a3;
    *(_QWORD *)(v13 + 2016) = a3[1];
    *(_QWORD *)(v13 + 2008) = *a3;
    *(_QWORD *)(v13 + 48) = v13;
    *(_QWORD *)v13 = 0xFFFFFFFFLL;
    *(_QWORD *)(v13 + 96) = BugCheckParameter1[1].ActiveProcessors.Bitmap[1];
    v14 = v18;
    *(_QWORD *)(v13 + 8) = *(_QWORD *)(v18 + 16);
    *(_QWORD *)(v13 + 16) = *(_QWORD *)(v14 + 24);
    *(_QWORD *)(v13 + 5240) = *(_QWORD *)(v14 + 32);
    *(_QWORD *)(v13 + 5968) = BBTBuffer;
    if ( v10 )
    {
      v8 = v13 + 0x2000;
      v18 = v13 + 0x2000;
      *(_DWORD *)(v13 + 8208) = 7680;
      *(_DWORD *)(v13 + 8656) = 65534;
      *(_WORD *)(v13 + 11258) = 522;
      *(_DWORD *)(v13 + 11260) = v13 + 11264;
      *(_DWORD *)(v13 + 8228) = *((_DWORD *)a3 + 2);
      *(_DWORD *)(v13 + 8224) = *(_DWORD *)a3;
      *(_DWORD *)(v13 + 9912) = *((_DWORD *)a3 + 2);
      *(_DWORD *)(v13 + 9908) = *(_DWORD *)a3;
      *(_DWORD *)(v13 + 8216) = v13 + 0x2000;
      *(_DWORD *)(v13 + 0x2000) = -1;
      *(_DWORD *)(v13 + 8240) = v10;
      *(_DWORD *)(v13 + 12144) = v13;
      *(_DWORD *)(v13 + 12056) = *(_DWORD *)(v13 + 5776);
      *(_DWORD *)(v13 + 8196) = *(_DWORD *)(v14 + 40);
      *(_DWORD *)(v13 + 8200) = *(_DWORD *)(v14 + 48);
      *(_DWORD *)(v13 + 11788) = *(_DWORD *)(v14 + 56);
      *(_DWORD *)(v13 + 6156) = 0x2000;
      *(_DWORD *)(v13 + 12252) = -8192;
    }
    *(_QWORD *)v13 = v8;
    KiUnstackDetachProcess(&v20, 0LL);
    *a5 = v13;
  }
  return (unsigned int)v12;
}
