/*
 * XREFs of ??1exception@@UEAA@XZ_0 @ 0x140003F05
 * Callers:
 *     ??1bad_alloc@std@@UEAA@XZ @ 0x140002E00 (--1bad_alloc@std@@UEAA@XZ.c)
 *     ??1out_of_range@std@@UEAA@XZ @ 0x140002E10 (--1out_of_range@std@@UEAA@XZ.c)
 *     ??_Ebad_alloc@std@@UEAAPEAXI@Z @ 0x140002E20 (--_Ebad_alloc@std@@UEAAPEAXI@Z.c)
 *     ??_Glength_error@std@@UEAAPEAXI@Z @ 0x140002E90 (--_Glength_error@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall exception::~exception(exception *this)
{
  __imp_??1exception@@UEAA@XZ(this);
}
