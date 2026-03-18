/*
 * XREFs of MmCreateTeb @ 0x1405091B0
 * Callers:
 *     PspAllocateThread @ 0x140493710 (PspAllocateThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiCreatePebOrTeb @ 0x1405093E0 (MiCreatePebOrTeb.c)
 */

__int64 __fastcall MmCreateTeb(_KPROCESS *BugCheckParameter1, __int64 a2, _QWORD *a3, __int64 a4, _QWORD *a5)
{
  __int64 v8; // rbx
  __int64 v9; // r15
  unsigned __int64 v10; // rax
  int v11; // esi
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int16 v15; // cx
  __int64 v16; // [rsp+20h] [rbp-78h] BYREF
  __int64 v17; // [rsp+28h] [rbp-70h]
  _QWORD *v18; // [rsp+30h] [rbp-68h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v19; // [rsp+38h] [rbp-60h] BYREF

  v17 = a2;
  v18 = a5;
  v8 = 0LL;
  v9 = 0LL;
  v10 = BugCheckParameter1[1].ActiveProcessors.Bitmap[7];
  if ( v10 )
  {
    v15 = *(_WORD *)(v10 + 8);
    if ( v15 == 332 || v15 == 452 )
      v9 = *(_QWORD *)v10;
  }
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v19);
  v11 = MiCreatePebOrTeb((unsigned int)(v9 != 0) + 1, a4, &v16);
  if ( v11 < 0 )
  {
    KiUnstackDetachProcess(&v19, 0LL);
  }
  else
  {
    v12 = v16;
    *(_DWORD *)(v16 + 32) = 7680;
    *(_DWORD *)(v12 + 744) = 65534;
    *(_WORD *)(v12 + 4698) = 522;
    *(_QWORD *)(v12 + 4704) = v12 + 4712;
    *(_QWORD *)(v12 + 72) = a3[1];
    *(_QWORD *)(v12 + 64) = *a3;
    *(_QWORD *)(v12 + 2016) = a3[1];
    *(_QWORD *)(v12 + 2008) = *a3;
    *(_QWORD *)(v12 + 48) = v12;
    *(_QWORD *)v12 = 0xFFFFFFFFLL;
    *(_QWORD *)(v12 + 96) = BugCheckParameter1[1].ActiveProcessors.Bitmap[1];
    v13 = v17;
    *(_QWORD *)(v12 + 8) = *(_QWORD *)(v17 + 16);
    *(_QWORD *)(v12 + 16) = *(_QWORD *)(v13 + 24);
    *(_QWORD *)(v12 + 5240) = *(_QWORD *)(v13 + 32);
    *(_QWORD *)(v12 + 5968) = BBTBuffer;
    if ( v9 )
    {
      v8 = v12 + 0x2000;
      v17 = v12 + 0x2000;
      *(_DWORD *)(v12 + 8208) = 7680;
      *(_DWORD *)(v12 + 8656) = 65534;
      *(_WORD *)(v12 + 11258) = 522;
      *(_DWORD *)(v12 + 11260) = v12 + 11264;
      *(_DWORD *)(v12 + 8228) = *((_DWORD *)a3 + 2);
      *(_DWORD *)(v12 + 8224) = *(_DWORD *)a3;
      *(_DWORD *)(v12 + 9912) = *((_DWORD *)a3 + 2);
      *(_DWORD *)(v12 + 9908) = *(_DWORD *)a3;
      *(_DWORD *)(v12 + 8216) = v12 + 0x2000;
      *(_DWORD *)(v12 + 0x2000) = -1;
      *(_DWORD *)(v12 + 8240) = v9;
      *(_DWORD *)(v12 + 12144) = v12;
      *(_DWORD *)(v12 + 12056) = *(_DWORD *)(v12 + 5776);
      *(_DWORD *)(v12 + 8196) = *(_DWORD *)(v13 + 40);
      *(_DWORD *)(v12 + 8200) = *(_DWORD *)(v13 + 48);
      *(_DWORD *)(v12 + 11788) = *(_DWORD *)(v13 + 56);
      *(_DWORD *)(v12 + 6156) = 0x2000;
      *(_DWORD *)(v12 + 12252) = -8192;
    }
    *(_QWORD *)v12 = v8;
    KiUnstackDetachProcess(&v19, 0LL);
    *a5 = v12;
  }
  return (unsigned int)v11;
}
