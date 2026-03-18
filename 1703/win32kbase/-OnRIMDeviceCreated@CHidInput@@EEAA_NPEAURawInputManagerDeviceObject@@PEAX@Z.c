/*
 * XREFs of ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAX@Z @ 0x1C004EA80
 * Callers:
 *     <none>
 * Callees:
 *     ?LogDeviceArrivedEvent@CHidInput@@AEAAXGIIKKHPEAU_UNICODE_STRING@@0@Z @ 0x1C004EB78 (-LogDeviceArrivedEvent@CHidInput@@AEAAXGIIKKHPEAU_UNICODE_STRING@@0@Z.c)
 *     HMCreateHandleForObject @ 0x1C008B430 (HMCreateHandleForObject.c)
 */

char __fastcall CHidInput::OnRIMDeviceCreated(CHidInput *this, struct RawInputManagerDeviceObject *a2, void *a3)
{
  struct RawInputManagerDeviceObject *v4; // rbp
  char v5; // si
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // r14d
  __int64 v10; // r10

  v4 = a2;
  v5 = 1;
  if ( (*((_DWORD *)a2 + 66) & 0x80u) != 0 )
  {
    v6 = *((_QWORD *)a2 + 67);
    LOBYTE(a2) = 22;
    v7 = HMCreateHandleForObject(v6, a2);
    v8 = v7;
    if ( v7 )
    {
      ++*(_DWORD *)(v7 + 8);
      *(_QWORD *)(v7 + 712) = a3;
      v9 = *(_DWORD *)(v7 + 696);
      if ( (int)IsEditionRegAddRemovePointerDeviceSystemMetricKeySupported() >= 0 )
        EditionRegAddRemovePointerDeviceSystemMetricKey(v9);
      if ( (*(_DWORD *)(v8 + 260) & 0x20) == 0 )
      {
        v10 = *((_QWORD *)v4 + 67);
        CHidInput::LogDeviceArrivedEvent(
          (CHidInput *)(v10 + 296),
          *(_WORD *)(*((_QWORD *)v4 + 65) + 40LL),
          *(unsigned __int16 *)(*((_QWORD *)v4 + 65) + 110LL),
          *(unsigned __int16 *)(*((_QWORD *)v4 + 65) + 112LL),
          *(_DWORD *)(v10 + 24),
          *(_DWORD *)(v10 + 696),
          *(_DWORD *)(v10 + 24) == 6,
          (struct _UNICODE_STRING *)(v10 + 296),
          (struct _UNICODE_STRING *)(v10 + 1472));
      }
    }
    else
    {
      return 0;
    }
  }
  return v5;
}
